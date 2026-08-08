#!/usr/bin/env bash
set -euo pipefail

project_root="${CM_BUILD_DIR:-$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)}"
archive_path="${1:-}"
pbx="$project_root/Unity-iPhone.xcodeproj/project.pbxproj"
app_domain="$project_root/Libraries/libil2cpp/icalls/mscorlib/System/AppDomain.cpp"
small_codegen="$project_root/Libraries/libil2cpp/codegen/il2cpp-codegen-common-small.h"
interpreter_module="$project_root/Libraries/libil2cpp/hybridclr/interpreter/InterpreterModule.cpp"
hybridclr_dir="$project_root/Libraries/libil2cpp/hybridclr"
lumps_dir="$project_root/Libraries/lumps"
stock_libil2cpp="$project_root/Libraries/libil2cpp.a"
report="$project_root/Build/iOS/hybridclr-verification.txt"

fail() {
  echo "HybridCLR verification failed: $*" >&2
  exit 1
}

mkdir -p "$(dirname "$report")"
if [ -z "$archive_path" ]; then
  : > "$report"
fi

test -f "$pbx" || fail "missing project.pbxproj"
test -d "$hybridclr_dir" || fail "missing Libraries/libil2cpp/hybridclr"
test -d "$lumps_dir" || fail "missing Libraries/lumps"
test ! -f "$stock_libil2cpp" || fail "stock Libraries/libil2cpp.a is present"
test -f "$app_domain" || fail "missing HybridCLR AppDomain.cpp"
test -f "$small_codegen" || fail "missing IL2CPP small codegen header"
test -f "$interpreter_module" || fail "missing HybridCLR InterpreterModule.cpp"

grep -Fq 'MetadataCache::LoadAssemblyFromBytes' "$app_domain" \
  || fail "AppDomain::LoadAssemblyRaw is not patched"
if grep -Fq 'NOT_SUPPORTED_IL2CPP(AppDomain::LoadAssemblyRaw' "$app_domain"; then
  fail "AppDomain::LoadAssemblyRaw still uses stock IL2CPP"
fi
grep -Fq 'return (T)INT64_MIN;' "$small_codegen" \
  || fail "Xcode 26 INT64 narrowing fix is missing"
grep -Fq 'return (T)INT32_MIN;' "$small_codegen" \
  || fail "Xcode 26 INT32 narrowing fix is missing"
delegate_fix_count="$(grep -Fc 'firstSubDel[0] = &del->delegate;' "$interpreter_module")"
test "$delegate_fix_count" -eq 2 \
  || fail "Xcode 26 HybridCLR delegate fix is incomplete"
grep -Fq 'lump_hybridclr_' "$pbx" || fail "HybridCLR lump is not linked"
if grep -Fq 'Libraries/libil2cpp.a' "$pbx"; then
  fail "project.pbxproj still links stock libil2cpp.a"
fi

lump_count="$(find "$lumps_dir" -maxdepth 1 -type f \( -name '*.cpp' -o -name '*.mm' \) | wc -l | tr -d ' ')"
test "$lump_count" -gt 0 || fail "no HybridCLR lump files found"

{
  echo "HybridCLRSource=OK"
  echo "PatchedLoadAssemblyRaw=OK"
  echo "Xcode26CodegenNarrowing=OK"
  echo "Xcode26InterpreterDelegate=OK"
  echo "StockLibil2cppAbsent=OK"
  echo "LumpCount=$lump_count"
} | tee -a "$report"

if [ -n "$archive_path" ]; then
  test -d "$archive_path" || fail "archive not found: $archive_path"
  app_path="$(find "$archive_path/Products/Applications" -maxdepth 1 -type d -name '*.app' -print -quit)"
  test -n "$app_path" || fail "no app found in archive"
  unity_framework="$app_path/Frameworks/UnityFramework.framework/UnityFramework"
  test -s "$unity_framework" || fail "UnityFramework binary is missing"

  if strings "$unity_framework" \
      | grep -Fq 'Unsupported internal call for IL2CPP:AppDomain::LoadAssemblyRaw'; then
    fail "archived UnityFramework contains stock AppDomain::LoadAssemblyRaw"
  fi

  {
    echo "ArchivedUnityFramework=$unity_framework"
    echo "ArchivedLoadAssemblyRaw=HybridCLR"
  } | tee -a "$report"
fi
