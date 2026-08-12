# MU iOS Xcode export

Fresh project-only iOS export generated from the current MU client with Unity
2021.3.26f1 on 2026-08-12. `Data/Raw` contains only the minimal iOS bootstrap;
gameplay resources update independently from `/res/ios/res` (v15 active, v16
reserved).

Device logging is enabled in every build. After installing and launching the
IPA once, open the app's shared Documents data in 3uTools and retrieve
`MUUnity.log`. The file is created before UnityFramework starts, so startup and
black-screen failures are captured as well.

The `ios-unsigned-sideloadly` Codemagic workflow builds an ARM64 device archive
without Apple signing and packages the resulting `.app` as an unsigned `.ipa`.
Sideloadly can apply the tester's Apple ID signature after download.

The source audit is preserved in `unresolved-ios-dependencies.txt`. This export
does not substitute Android/Windows libraries and does not generate fake native
iOS libraries.
