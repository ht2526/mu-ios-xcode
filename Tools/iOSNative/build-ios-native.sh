#!/usr/bin/env bash
set -euo pipefail

project_root="${CM_BUILD_DIR:-$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)}"
tool_root="$project_root/Tools/iOSNative"
work_root="$project_root/Build/iOS/native-work"
output_root="${IOS_NATIVE_OUTPUT_DIR:-$project_root/Assets/Plugins/iOS/native-generated}"
minimum_ios="${IOS_MIN_OS_VERSION:-12.0}"

fail() {
  echo "ERROR: $*" >&2
  exit 1
}

command -v xcrun >/dev/null || fail "Xcode command-line tools are required"
command -v git >/dev/null || fail "git is required"
command -v curl >/dev/null || fail "curl is required"
command -v python3 >/dev/null || fail "python3 is required"
test -f "$tool_root/vendor-lock.json" || fail "Missing vendor-lock.json"
test -f "$tool_root/src/mu_luv.cpp" || fail "Missing project luv implementation"

read_lock() {
  python3 - "$tool_root/vendor-lock.json" "$1" <<'PY'
import json, sys
with open(sys.argv[1], encoding="utf-8") as stream:
    value = json.load(stream)
for key in sys.argv[2].split("."):
    value = value[key]
print(value)
PY
}

sha256_file() {
  shasum -a 256 "$1" | awk '{print tolower($1)}'
}

checkout_commit() {
  local repository="$1"
  local commit="$2"
  local destination="$3"
  if [ ! -d "$destination/.git" ]; then
    rm -rf "$destination"
    git init -q "$destination"
    git -C "$destination" remote add origin "$repository"
  fi
  git -C "$destination" fetch -q --depth 1 origin "$commit"
  git -C "$destination" checkout -q --detach FETCH_HEAD
  test "$(git -C "$destination" rev-parse HEAD)" = "$commit" ||
    fail "Revision mismatch for $repository"
}

rm -rf "$work_root"
mkdir -p "$work_root" "$output_root"

xlua_repo="$(read_lock dependencies.xlua.repository)"
xlua_commit="$(read_lock dependencies.xlua.commit)"
xlua_artifact="$(read_lock dependencies.xlua.artifact)"
xlua_hash="$(read_lock dependencies.xlua.sha256)"
checkout_commit "$xlua_repo" "$xlua_commit" "$work_root/xlua"

source_xlua="$work_root/xlua/$xlua_artifact"
test -s "$source_xlua" || fail "Pinned Tencent xLua iOS archive is missing"
test "$(sha256_file "$source_xlua")" = "$xlua_hash" ||
  fail "Pinned Tencent xLua archive hash mismatch"
cp "$source_xlua" "$output_root/libxlua.a"
xcrun lipo "$output_root/libxlua.a" -verify_arch arm64 ||
  fail "Pinned Tencent xLua archive does not contain ARM64"

rapid_repo="$(read_lock dependencies.luaRapidjson.repository)"
rapid_commit="$(read_lock dependencies.luaRapidjson.commit)"
checkout_commit "$rapid_repo" "$rapid_commit" "$work_root/lua-rapidjson"

pb_repo="$(read_lock dependencies.luaProtobuf.repository)"
pb_commit="$(read_lock dependencies.luaProtobuf.commit)"
checkout_commit "$pb_repo" "$pb_commit" "$work_root/lua-protobuf"

lpeg_url="$(read_lock dependencies.lpeg.url)"
lpeg_hash="$(read_lock dependencies.lpeg.sha256)"
curl --fail --location --silent --show-error "$lpeg_url" -o "$work_root/lpeg.tar.gz"
test "$(sha256_file "$work_root/lpeg.tar.gz")" = "$lpeg_hash" ||
  fail "LPeg source archive hash mismatch"
tar -xzf "$work_root/lpeg.tar.gz" -C "$work_root"
lpeg_root="$work_root/lpeg-$(read_lock dependencies.lpeg.version)"

sdk="$(xcrun --sdk iphoneos --show-sdk-path)"
cc="$(xcrun --sdk iphoneos --find clang)"
cxx="$(xcrun --sdk iphoneos --find clang++)"
ar="$(xcrun --sdk iphoneos --find ar)"
ranlib="$(xcrun --sdk iphoneos --find ranlib)"
lua_include="$work_root/xlua/build/lua-5.3.5/src"
if [ ! -f "$lua_include/luaconf.h" ] && [ -f "$lua_include/luaconf.h.in" ]; then
  cp "$lua_include/luaconf.h.in" "$lua_include/luaconf.h"
  sed -i.bak 's/^#cmakedefine LUA_IDSIZE.*$/#define LUA_IDSIZE 120/' "$lua_include/luaconf.h"
  rm -f "$lua_include/luaconf.h.bak"
fi
test -f "$lua_include/luaconf.h" || fail "Tencent xLua Lua 5.3 configuration header is missing"
object_root="$work_root/objects"
mkdir -p "$object_root"

common=(
  -arch arm64
  -isysroot "$sdk"
  "-miphoneos-version-min=$minimum_ios"
  -O2
  -fPIC
  -fvisibility=hidden
  -ffunction-sections
  -fdata-sections
  -I"$lua_include"
)

objects=()
compile_c() {
  local source="$1"
  local output="$object_root/$(basename "${source%.*}")-$(printf '%s' "$source" | shasum | cut -c1-8).o"
  "$cc" "${common[@]}" -std=c11 -c "$source" -o "$output"
  objects+=("$output")
}

compile_cxx() {
  local source="$1"
  local output="$object_root/$(basename "${source%.*}")-$(printf '%s' "$source" | shasum | cut -c1-8).o"
  "$cxx" "${common[@]}" -std=c++14 -stdlib=libc++ \
    -I"$work_root/lua-rapidjson/rapidjson/include" \
    -I"$work_root/lua-rapidjson/src" \
    -c "$source" -o "$output"
  objects+=("$output")
}

compile_c "$work_root/lua-protobuf/pb.c"
for source in "$lpeg_root"/lpvm.c "$lpeg_root"/lptree.c "$lpeg_root"/lpcap.c \
              "$lpeg_root"/lpcset.c "$lpeg_root"/lpcode.c "$lpeg_root"/lpprint.c; do
  compile_c "$source"
done
for source in "$work_root/lua-rapidjson/src/Document.cpp" \
              "$work_root/lua-rapidjson/src/Schema.cpp" \
              "$work_root/lua-rapidjson/src/rapidjson.cpp" \
              "$work_root/lua-rapidjson/src/values.cpp"; do
  compile_cxx "$source"
done
compile_cxx "$tool_root/src/mu_luv.cpp"

"$ar" -rcs "$output_root/libmu_xlua_extensions.a" "${objects[@]}"
"$ranlib" "$output_root/libmu_xlua_extensions.a"
xcrun lipo "$output_root/libmu_xlua_extensions.a" -verify_arch arm64 ||
  fail "Generated xLua extension archive is not ARM64"

cat > "$output_root/libxlua.a.meta" <<'META'
fileFormatVersion: 2
guid: ae4c856e39a746f6bc49cfb95de91201
PluginImporter:
  externalObjects: {}
  serializedVersion: 2
  iconMap: {}
  executionOrder: {}
  defineConstraints: []
  isPreloaded: 0
  isOverridable: 0
  isExplicitlyReferenced: 0
  validateReferences: 1
  platformData:
  - first:
      Any:
    second:
      enabled: 0
      settings: {}
  - first:
      Editor: Editor
    second:
      enabled: 0
      settings:
        DefaultValueInitialized: true
  - first:
      iPhone: iOS
    second:
      enabled: 1
      settings:
        AddToEmbeddedBinaries: false
  userData:
  assetBundleName:
  assetBundleVariant:
META

cat > "$output_root/libmu_xlua_extensions.a.meta" <<'META'
fileFormatVersion: 2
guid: 4946d9e38d0342048acc83e22fc55a7a
PluginImporter:
  externalObjects: {}
  serializedVersion: 2
  iconMap: {}
  executionOrder: {}
  defineConstraints: []
  isPreloaded: 0
  isOverridable: 0
  isExplicitlyReferenced: 0
  validateReferences: 1
  platformData:
  - first:
      Any:
    second:
      enabled: 0
      settings: {}
  - first:
      Editor: Editor
    second:
      enabled: 0
      settings:
        DefaultValueInitialized: true
  - first:
      iPhone: iOS
    second:
      enabled: 1
      settings:
        AddToEmbeddedBinaries: false
  userData:
  assetBundleName:
  assetBundleVariant:
META

symbols="$work_root/xlua-symbols.txt"
{
  xcrun nm -gU "$output_root/libxlua.a" || true
  xcrun nm -gU "$output_root/libmu_xlua_extensions.a" || true
} > "$symbols"

for symbol in luaL_newstate luaopen_xlua xlua_get_lib_version \
              luaopen_lpeg luaopen_pb luaopen_rapidjson luaopen_luv; do
  grep -Eq "[[:space:]]_?${symbol}$" "$symbols" ||
    fail "Native xLua ABI symbol is missing: $symbol"
done

mkdir -p "$project_root/Build/iOS"
{
  echo "Target=iOS-arm64"
  echo "MinimumOS=$minimum_ios"
  echo "XLuaCommit=$xlua_commit"
  echo "LuaRapidjsonCommit=$rapid_commit"
  echo "LuaProtobufCommit=$pb_commit"
  echo "XLuaArchiveSha256=$(sha256_file "$output_root/libxlua.a")"
  echo "ExtensionsArchiveSha256=$(sha256_file "$output_root/libmu_xlua_extensions.a")"
  echo "VerifiedSymbols=luaL_newstate,luaopen_xlua,xlua_get_lib_version,luaopen_lpeg,luaopen_pb,luaopen_rapidjson,luaopen_luv"
} > "$project_root/Build/iOS/ios-native-xlua-summary.txt"

echo "Built real iOS ARM64 xLua runtime: $output_root"
echo "The separate proprietary nav/gamecppDll gate remains active."
