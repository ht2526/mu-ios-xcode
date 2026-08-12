#!/usr/bin/env bash
set -euo pipefail

project_root="${CM_BUILD_DIR:-$(cd "$(dirname "$0")/../.." && pwd)}"
raw_root="$project_root/Data/Raw"
data_root="$project_root/Data"
staging_root="$project_root/Build/bootstrap-raw"
report="$project_root/Build/bootstrap-payload-report.txt"

test -d "$raw_root" || { echo "Missing Xcode payload: $raw_root" >&2; exit 1; }
test -d "$data_root" || { echo "Missing Unity Data root: $data_root" >&2; exit 1; }

rm -rf "$staging_root"
mkdir -p "$staging_root"

copy_payload() {
  local relative="$1"
  local source="$raw_root/$relative"
  local target="$staging_root/$relative"
  [ -e "$source" ] || return 0
  mkdir -p "$(dirname "$target")"
  cp -a "$source" "$target"
}

# Keep only the iOS startup payload. Gameplay bundles are intentionally
# downloaded on demand from the dedicated /res/ios/res endpoint.
for item in \
  bundle.ver bundlejo.json cache_seed_manifest.txt version.ver \
  platform_build.info \
  asm lang lua machine shader tree; do
  copy_payload "$item"
done

# v15 is active. v16 is retained only as the reserved rollback/update slot.
copy_payload "1_0_15"
copy_payload "1_0_16"
for item in \
  prelogin.ab \
  prefab/role_p/hero/knight/set_0.ab \
  prefab/role_p/hero/wizard/set_0.ab \
  prefab/role_p/hero/elf/set_0.ab \
  prefab/role_p/hero/magic/set_0.ab; do
  copy_payload "$item"
done

before_bytes="$(du -sk "$raw_root" | awk '{print $1 * 1024}')"
after_bytes="$(du -sk "$staging_root" | awk '{print $1 * 1024}')"
after_mb="$(( (after_bytes + 1048575) / 1048576 ))"
file_count="$(find "$staging_root" -type f | wc -l | tr -d ' ')"

{
  echo "Mode=iOSBootstrap"
  echo "BeforeBytes=$before_bytes"
  echo "AfterBytes=$after_bytes"
  echo "AfterMiB=$after_mb"
  echo "Files=$file_count"
  echo "Platform=iOS"
  echo "ResourcePolicy=Gameplay bundles download from /res/ios/res"
  echo "RuntimePolicy=Unity runtime stays in Data from this Xcode export"
  echo "Required=asm,lua,v15,v16,prelogin,starter-classes"
} | tee "$report"

if [ "$after_mb" -gt 55 ]; then
  echo "Bootstrap payload exceeds 55 MiB: ${after_mb} MiB" >&2
  exit 1
fi

test -s "$staging_root/asm/hotfix/hotfix.bytes"
find "$staging_root/asm/hotfix" -maxdepth 1 -type f \
  -name 'hotfix.bytes.*' -delete
test -s "$staging_root/lua/packed32.bytes"
test -s "$staging_root/lua/packed64.bytes"
test -s "$staging_root/platform_build.info"
test -s "$staging_root/1_0_15/version.ver"
test -s "$staging_root/1_0_15/bundle.ver"
test -s "$staging_root/1_0_16/version.ver"
test -s "$staging_root/1_0_16/bundle.ver"
# Runtime and metadata must come directly from the same fresh Unity Xcode
# export. A nested Data/Raw/bin copy is stale, duplicate runtime data.
test ! -e "$staging_root/bin"
test -s "$data_root/globalgamemanagers"
test -s "$data_root/Managed/Metadata/global-metadata.dat"
test -s "$data_root/ScriptingAssemblies.json"
test -s "$staging_root/prelogin.ab"
test -s "$staging_root/prefab/role_p/hero/knight/set_0.ab"
test -s "$staging_root/prefab/role_p/hero/wizard/set_0.ab"
test -s "$staging_root/prefab/role_p/hero/elf/set_0.ab"
test -s "$staging_root/prefab/role_p/hero/magic/set_0.ab"
if find "$staging_root" -type f \( -name 'lib.bytes' -o -name 'builtin.bytes' \) \
  -print -quit | grep -q .; then
  echo "Protected Android runtime bytes leaked into iOS bootstrap" >&2
  exit 1
fi

# This modifies only the disposable Codemagic checkout. The Git payload and
# local Unity source remain intact.
rm -rf "$raw_root"
mv "$staging_root" "$raw_root"

echo "Bootstrap payload prepared successfully."
