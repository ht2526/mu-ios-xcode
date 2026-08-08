#!/usr/bin/env bash
set -euo pipefail

project_root="${CM_BUILD_DIR:-$(cd "$(dirname "$0")/../.." && pwd)}"
raw_root="$project_root/Data/Raw"
staging_root="$project_root/Build/bootstrap-raw"
report="$project_root/Build/bootstrap-payload-report.txt"

test -d "$raw_root" || { echo "Missing Xcode payload: $raw_root" >&2; exit 1; }

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

# Match the verified 73.84 MB Android bootstrap payload. Gameplay bundles are
# intentionally downloaded on demand from ResourceURL.
for item in \
  bundle.ver bundlejo.json cache_seed_manifest.txt version.ver \
  asm bin lang lua machine shader tree; do
  copy_payload "$item"
done

# Keep only the current updater snapshot and the same four starter-class
# bundles present in MU_full.apk.
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
  echo "ResourcePolicy=Gameplay bundles download from ResourceURL"
  echo "Required=asm,bin,lua,version,prelogin,starter-classes"
} | tee "$report"

if [ "$after_mb" -gt 55 ]; then
  echo "Bootstrap payload exceeds 55 MiB: ${after_mb} MiB" >&2
  exit 1
fi

test -s "$staging_root/asm/hotfix/hotfix.bytes"
test -s "$staging_root/lua/packed32.bytes"
test -s "$staging_root/lua/packed64.bytes"
# The iOS export stores Unity runtime data under bin/Data. Android's
# bin/builtin.bytes does not exist in an exported Xcode project.
test -s "$staging_root/bin/Data/globalgamemanagers"
test -s "$staging_root/bin/Data/Managed/Metadata/global-metadata.dat"
test -s "$staging_root/prelogin.ab"
test -s "$staging_root/prefab/role_p/hero/knight/set_0.ab"
test -s "$staging_root/prefab/role_p/hero/wizard/set_0.ab"
test -s "$staging_root/prefab/role_p/hero/elf/set_0.ab"
test -s "$staging_root/prefab/role_p/hero/magic/set_0.ab"

# This modifies only the disposable Codemagic checkout. The Git payload and
# local Unity source remain intact.
rm -rf "$raw_root"
mv "$staging_root" "$raw_root"

echo "Bootstrap payload prepared successfully."
