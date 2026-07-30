# MU iOS Xcode export

Fresh Unity iOS export generated from the current MU client with Unity
2021.3.26f1 on 2026-07-31.

The `ios-unsigned-sideloadly` Codemagic workflow builds an ARM64 device archive
without Apple signing and packages the resulting `.app` as an unsigned `.ipa`.
Sideloadly can apply the tester's Apple ID signature after download.

The source audit is preserved in `unresolved-ios-dependencies.txt`. This export
does not substitute Android/Windows libraries and does not generate fake native
iOS libraries.
