# Legacy native bridge

This directory contains the ARM64 `UnityFramework` binary supplied with the
owner's original iOS application. The Codemagic workflow copies it into a
separately named `LegacyNative.framework` and changes its Mach-O install name.

The bridge supplies the proprietary `nav`, `tile`, `gamecpp`, `rectpack`,
`plant`, and `sensitive` exports that are absent from the shared Unity project.
It is intended only for unsigned Sideloadly compatibility testing. Replace it
with the original iOS plugin source or static libraries when those become
available.
