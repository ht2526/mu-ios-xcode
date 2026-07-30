[CmdletBinding()]
param(
    [string]$ProjectRoot = '',
    [switch]$FailOnMissing
)

$ErrorActionPreference = 'Stop'
if ([string]::IsNullOrWhiteSpace($ProjectRoot)) {
    $ProjectRoot = (Resolve-Path (Join-Path $PSScriptRoot '..\..')).Path
}

function Get-NestedTypes {
    param([Mono.Cecil.TypeDefinition]$Type)
    $result = @($Type)
    foreach ($child in $Type.NestedTypes) {
        $result += Get-NestedTypes -Type $child
    }
    return $result
}

$cecilCandidates = @(
    (Join-Path $ProjectRoot 'Tools\VngBundleUnpacker\bin\Mono.Cecil.dll'),
    (Join-Path $ProjectRoot 'HybridCLRData\LocalIl2CppData-WindowsEditor\il2cpp\build\deploy\Mono.Cecil.dll')
)
$cecilPath = $cecilCandidates |
    Where-Object { Test-Path -LiteralPath $_ -PathType Leaf } |
    Select-Object -First 1
if (-not $cecilPath) {
    throw 'Mono.Cecil.dll was not found; cannot audit managed native ABI.'
}
Add-Type -LiteralPath $cecilPath

$requirements = [System.Collections.Generic.List[object]]::new()
foreach ($assemblyName in @('xlua.dll', 'pure.dll', 'game.dll')) {
    $path = Join-Path $ProjectRoot "Assets\Plugins\iOS\csharp\$assemblyName"
    if (-not (Test-Path -LiteralPath $path -PathType Leaf)) {
        throw "Missing managed iOS assembly: $path"
    }

    $assembly = [Mono.Cecil.AssemblyDefinition]::ReadAssembly($path)
    try {
        foreach ($rootType in $assembly.MainModule.Types) {
            foreach ($type in (Get-NestedTypes -Type $rootType)) {
                foreach ($method in $type.Methods) {
                    if (-not $method.HasPInvokeInfo) {
                        continue
                    }
                    $symbol = $method.PInvokeInfo.EntryPoint
                    $runtime = if ($assemblyName -ieq 'xlua.dll') {
                        'xlua'
                    }
                    elseif ($symbol -match '^(nav_|tile_|plant_)') {
                        'nav'
                    }
                    else {
                        'gamecppDll'
                    }
                    $requirements.Add([pscustomobject]@{
                        Runtime = $runtime
                        Symbol = $symbol
                        ManagedOwner = "$($type.FullName)::$($method.Name)"
                    })
                }
            }
        }
    }
    finally {
        $assembly.Dispose()
    }
}

$requirements = @($requirements |
    Sort-Object Runtime, Symbol -Unique)

$nativeRoot = Join-Path $ProjectRoot 'Assets\Plugins\iOS'
$nativeFiles = @(Get-ChildItem -LiteralPath $nativeRoot -Recurse -File -ErrorAction SilentlyContinue |
    Where-Object { $_.Extension -in @('.a', '.m', '.mm', '.cpp') })

$llvmNm = Get-ChildItem 'C:\Users\Admin\AppData\Local\Android\Sdk\ndk' -Recurse -Filter llvm-nm.exe -File -ErrorAction SilentlyContinue |
    Sort-Object FullName -Descending |
    Select-Object -First 1 -ExpandProperty FullName
$availableSymbols = [System.Collections.Generic.HashSet[string]]::new([StringComparer]::Ordinal)
if ($llvmNm) {
    foreach ($file in $nativeFiles | Where-Object Extension -eq '.a') {
        $lines = & $llvmNm -g $file.FullName 2>$null
        foreach ($line in $lines) {
            if ($line -match '\b_?([A-Za-z][A-Za-z0-9_]*)$') {
                [void]$availableSymbols.Add($Matches[1])
            }
        }
    }
}

$reportRoot = Join-Path $ProjectRoot 'Build\iOS'
New-Item -ItemType Directory -Force -Path $reportRoot | Out-Null
$reportPath = Join-Path $reportRoot 'native-abi-audit.txt'
$missingCount = 0
$lines = [System.Collections.Generic.List[string]]::new()
$lines.Add("Project=$ProjectRoot")
$lines.Add("ManagedRequirementCount=$($requirements.Count)")
$lines.Add("NativeArchiveCount=$(($nativeFiles | Where-Object Extension -eq '.a').Count)")
$lines.Add("ArchiveSymbolInspectionAvailable=$([bool]$llvmNm)")

foreach ($runtime in @('xlua', 'nav', 'gamecppDll')) {
    $runtimeRequirements = @($requirements | Where-Object Runtime -eq $runtime)
    $lines.Add('')
    $lines.Add("[$runtime] Required=$($runtimeRequirements.Count)")
    foreach ($item in $runtimeRequirements) {
        $state = if ($availableSymbols.Contains($item.Symbol)) { 'FOUND' } else { 'MISSING' }
        if ($state -eq 'MISSING') {
            ++$missingCount
        }
        $lines.Add("$state`t$($item.Symbol)`t$($item.ManagedOwner)")
    }
}
$lines.Add('')
$lines.Add("MissingSymbolCount=$missingCount")
$lines | Set-Content -LiteralPath $reportPath -Encoding UTF8

Write-Host "Native ABI audit: $reportPath"
Write-Host "Required=$($requirements.Count) Missing=$missingCount"
if ($FailOnMissing -and $missingCount -gt 0) {
    throw "Native ABI audit has $missingCount unresolved symbol(s)."
}
