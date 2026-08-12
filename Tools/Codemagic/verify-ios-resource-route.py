#!/usr/bin/env python3
"""Fail closed when an exported iOS client points at Android resources."""

from __future__ import annotations

import argparse
import json
import lzma
import struct
from pathlib import Path


IOS_WRAPPER = 'il2cpp_codegen_string_new_wrapper("iOS")'
ANDROID_LITERAL = "_stringLiteral77843243D4312B40A1163EFE55D56961E2352D09"


def extract_method(source: str, method_name: str) -> str:
    marker = f"{method_name} ("
    offset = 0
    while True:
        start = source.find(marker, offset)
        if start < 0:
            raise ValueError(f"Method definition not found: {method_name}")
        line_end = source.find("\n", start)
        if line_end < 0:
            raise ValueError(f"Method signature is truncated: {method_name}")
        if ";" not in source[start:line_end]:
            brace = source.find("{", line_end)
            if brace < 0:
                raise ValueError(f"Method body is missing: {method_name}")
            depth = 0
            for index in range(brace, len(source)):
                char = source[index]
                if char == "{":
                    depth += 1
                elif char == "}":
                    depth -= 1
                    if depth == 0:
                        return source[start : index + 1]
            raise ValueError(f"Method body is unbalanced: {method_name}")
        offset = line_end + 1


def read_cstring(data: bytes, offset: int) -> tuple[str, int]:
    end = data.index(b"\0", offset)
    return data[offset:end].decode("utf-8", errors="replace"), end + 1


def read_extended_length(data: bytes, offset: int, length: int) -> tuple[int, int]:
    while True:
        if offset >= len(data):
            raise ValueError("LZ4 extended length is truncated")
        value = data[offset]
        offset += 1
        length += value
        if value != 255:
            return length, offset


def decompress_lz4_block(data: bytes, expected_size: int) -> bytes:
    output = bytearray()
    offset = 0
    while offset < len(data):
        token = data[offset]
        offset += 1
        literal_length = token >> 4
        if literal_length == 15:
            literal_length, offset = read_extended_length(data, offset, literal_length)
        literal_end = offset + literal_length
        if literal_end > len(data):
            raise ValueError("LZ4 literal run is truncated")
        output.extend(data[offset:literal_end])
        offset = literal_end
        if offset == len(data):
            break
        if offset + 2 > len(data):
            raise ValueError("LZ4 match offset is truncated")
        match_offset = data[offset] | (data[offset + 1] << 8)
        offset += 2
        if match_offset <= 0 or match_offset > len(output):
            raise ValueError(f"Invalid LZ4 match offset: {match_offset}")
        match_length = token & 0x0F
        if match_length == 15:
            match_length, offset = read_extended_length(data, offset, match_length)
        match_length += 4
        for _ in range(match_length):
            output.append(output[-match_offset])
    if len(output) != expected_size:
        raise ValueError(
            f"LZ4 size mismatch: expected {expected_size}, got {len(output)}"
        )
    return bytes(output)


def decompress(data: bytes, compression: int, expected_size: int) -> bytes:
    if compression == 0:
        result = data
    elif compression == 1:
        result = lzma.decompress(data)
    elif compression in (2, 3):
        result = decompress_lz4_block(data, expected_size)
    else:
        raise ValueError(f"Unsupported UnityFS compression: {compression}")
    if len(result) != expected_size:
        raise ValueError(
            f"Decompressed size mismatch: expected {expected_size}, got {len(result)}"
        )
    return result


def read_unityfs_target(path: Path) -> int:
    raw = path.read_bytes()
    signature, offset = read_cstring(raw, 0)
    if signature != "UnityFS":
        raise ValueError(f"Not UnityFS: {path}")
    _format = struct.unpack_from(">I", raw, offset)[0]
    offset += 4
    _unity_version, offset = read_cstring(raw, offset)
    _revision, offset = read_cstring(raw, offset)
    _size, compressed_info_size, uncompressed_info_size, flags = struct.unpack_from(
        ">QIII", raw, offset
    )
    offset += 20
    if flags & 0x200:
        offset = (offset + 15) & ~15

    info_offset = len(raw) - compressed_info_size if flags & 0x80 else offset
    info = decompress(
        raw[info_offset : info_offset + compressed_info_size],
        flags & 0x3F,
        uncompressed_info_size,
    )
    cursor = 16
    block_count = struct.unpack_from(">I", info, cursor)[0]
    cursor += 4
    blocks: list[tuple[int, int, int]] = []
    for _index in range(block_count):
        uncompressed, compressed, block_flags = struct.unpack_from(">IIH", info, cursor)
        cursor += 10
        blocks.append((uncompressed, compressed, block_flags))

    node_count = struct.unpack_from(">I", info, cursor)[0]
    cursor += 4
    if node_count <= 0:
        raise ValueError(f"UnityFS has no nodes: {path}")
    first_node_offset, first_node_size, _node_flags = struct.unpack_from(">QQI", info, cursor)
    cursor += 20
    _node_name, cursor = read_cstring(info, cursor)

    data_offset = offset if flags & 0x80 else offset + compressed_info_size
    if flags & 0x200:
        data_offset = (data_offset + 15) & ~15
    required = first_node_offset + min(first_node_size, 256)
    stream = bytearray()
    compressed_offset = data_offset
    for uncompressed, compressed, block_flags in blocks:
        stream.extend(
            decompress(
                raw[compressed_offset : compressed_offset + compressed],
                block_flags & 0x3F,
                uncompressed,
            )
        )
        compressed_offset += compressed
        if len(stream) >= required:
            break
    serialized = bytes(stream[first_node_offset:])
    if len(serialized) < 64:
        raise ValueError(f"Serialized header is truncated: {path}")

    serialized_version = struct.unpack_from(">I", serialized, 8)[0]
    header_size = 48 if serialized_version >= 22 else (20 if serialized_version >= 9 else 16)
    unity_version, metadata_offset = read_cstring(serialized, header_size)
    if not unity_version:
        raise ValueError(f"Serialized Unity version is empty: {path}")
    return struct.unpack_from("<i", serialized, metadata_offset)[0]


def require(condition: bool, message: str) -> None:
    if not condition:
        raise RuntimeError(message)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--project-root", type=Path, required=True)
    args = parser.parse_args()

    project_root = args.project_root.resolve()
    raw_root = project_root / "Data" / "Raw"
    pure5 = (project_root / "Classes" / "Native" / "pure__5.cpp").read_text(
        encoding="utf-8", errors="strict"
    )
    pure6 = (project_root / "Classes" / "Native" / "pure__6.cpp").read_text(
        encoding="utf-8", errors="strict"
    )

    object_name = extract_method(
        pure5, "RemoteAssetSite_ObjectName_mE231FE3623863E3B056E85B06FCDB8267C753438"
    )
    parse_config = extract_method(
        pure5, "RemoteAssetSite_ParseConfigInfo_m6B6A3181B538718E06E517161CFB5240528B2887"
    )
    native_factory = extract_method(
        pure6, "NativeFactory_GetInterface_m4247CE2E2B7FCEE9FFE74CC466502B6DBEC4109E"
    )

    for label, body in (("ObjectName", object_name), ("ParseConfigInfo", parse_config)):
        require(IOS_WRAPPER in body, f"{label} does not select iOS")
        require(ANDROID_LITERAL not in body, f"{label} still selects Android")
        require("String_ToLower" in body, f"{label} does not normalize the route")
    require("RemoteAssetSite_set_PlatformRoot" in parse_config, "PlatformRoot is not set")
    require("RemoteAssetSite_set_ResourceRoot" in parse_config, "ResourceRoot is not set")
    require("NativeImpl_Editor" in native_factory, "iOS native factory is not safe")
    require("NativeImpl_Android" not in native_factory, "Android native factory leaked into iOS")

    required = (
        "bundle.ver",
        "bundlejo.json",
        "version.ver",
        "platform_build.info",
        "asm/hotfix/hotfix.bytes",
        "bin/Data/globalgamemanagers",
        "bin/Data/Managed/Metadata/global-metadata.dat",
        "lua/packed32.bytes",
        "lua/packed64.bytes",
        "prelogin.ab",
        "prefab/role_p/hero/knight/set_0.ab",
        "prefab/role_p/hero/wizard/set_0.ab",
        "prefab/role_p/hero/elf/set_0.ab",
        "prefab/role_p/hero/magic/set_0.ab",
    )
    for relative in required:
        path = raw_root / relative
        require(path.is_file() and path.stat().st_size > 0, f"Missing bootstrap file: {relative}")

    require(not (raw_root / "Android").exists(), "Android root bundle is present in iOS IPA")
    require(
        not (raw_root / "Android.manifest").exists(),
        "Android root manifest is present in iOS IPA",
    )
    require(
        not (raw_root / "REMOTE_EXACT_BACKUP.tsv").exists(),
        "Android resource backup map is present in iOS IPA",
    )
    version = (raw_root / "version.ver").read_bytes()
    require(len(version) >= 4, "version.ver is truncated")
    active_version = struct.unpack_from("<I", version, 0)[0]
    require(active_version == 15, f"Expected active version 15, got {active_version}")

    platform_info = (raw_root / "platform_build.info").read_text(
        encoding="utf-8", errors="strict"
    )
    for marker in (
        "Platform=iOS",
        "BuildTarget=iOS",
        "ActiveVersion=1_0_15",
        "ReservedVersion=1_0_16",
    ):
        require(marker in platform_info, f"Missing platform marker: {marker}")

    catalog = json.loads(
        (raw_root / "bundlejo.json").read_text(encoding="utf-8-sig")
    )
    shader_rows = [
        row
        for row in catalog.get("assets", [])
        if row.get("type") == 0 and row.get("file") == "shader/shaders.ab"
    ]
    require(len(shader_rows) == 1, "Expected one shader/shaders.ab catalog row")
    shader_row = shader_rows[0]
    require(
        int(shader_row.get("version", -1)) >= 3,
        "iOS shader catalog version must invalidate legacy Android cache",
    )
    require(
        str(shader_row.get("hashCode", "")).lower()
        == "593863587d7d2a96f060093211825d47",
        "iOS shader catalog hash is not the approved target-9 bundle",
    )

    total_bytes = sum(path.stat().st_size for path in raw_root.rglob("*") if path.is_file())
    require(total_bytes <= 55 * 1024 * 1024, f"Bootstrap exceeds 55 MiB: {total_bytes}")

    bundles: list[Path] = []
    failures: list[str] = []
    for path in sorted(raw_root.rglob("*")):
        if not path.is_file():
            continue
        with path.open("rb") as stream:
            if stream.read(8) != b"UnityFS\0":
                continue
        bundles.append(path)
        try:
            actual = read_unityfs_target(path)
            if actual != 9:
                failures.append(f"{path.relative_to(raw_root).as_posix()}: target={actual}")
        except Exception as exception:
            failures.append(
                f"{path.relative_to(raw_root).as_posix()}: "
                f"{type(exception).__name__}: {exception}"
            )
    require(len(bundles) >= 5, f"Expected at least 5 iOS UnityFS bundles, got {len(bundles)}")
    require(not failures, "Invalid iOS UnityFS bundles:\n" + "\n".join(failures))

    report = project_root / "Build" / "iOS" / "ios-resource-route-verification.txt"
    report.parent.mkdir(parents=True, exist_ok=True)
    report.write_text(
        "\n".join(
            (
                "RoutePlatform=iOS",
                "ResourceRootSuffix=/ios/res",
                "NativeFactory=Editor",
                f"ActiveVersion={active_version}",
                "ReservedVersion=16",
                f"BootstrapBytes={total_bytes}",
                f"UnityFSBundles={len(bundles)}",
                "UnityFSBuildTarget=9",
                f"ShaderCatalogVersion={shader_row['version']}",
                f"ShaderCatalogHash={shader_row['hashCode']}",
            )
        )
        + "\n",
        encoding="utf-8",
    )
    print(report.read_text(encoding="utf-8"), end="")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
