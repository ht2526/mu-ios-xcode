# MU iOS native bootstrap

This folder rebuilds the native xLua dependencies required by the current
managed `xlua.dll` for iOS ARM64. Versions and hashes are pinned in
`vendor-lock.json`.

`build-ios-native.sh` downloads immutable upstream revisions, verifies the
prebuilt Tencent xLua archive, compiles LPeg, lua-protobuf, lua-rapidjson and
the project's small `luv` TCP API, then writes Unity iOS plugins to
`Assets/Plugins/iOS/native-generated`.

The custom TCP implementation is non-blocking and invokes Lua callbacks only
from `tcp:update()`. The game config sets compression level to `-1`, so packet
compression is intentionally not applied.

This solves the complete 121-symbol ABI expected by `xlua.dll`. `nav` and
`gamecppDll` are separate proprietary runtimes and remain release blockers
until their source-equivalent implementations are supplied.

Run `Audit-NativeAbi.ps1` on Windows to regenerate
`Build/iOS/native-abi-audit.txt`. It reads the real P/Invoke declarations from
the patched iOS assemblies and, when Apple archives are present, checks their
exported symbols with `llvm-nm`. Use `-FailOnMissing` as a release gate.
