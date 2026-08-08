#include <UnityFramework/UnityFramework.h>
#include <cstdio>

static void MUInstallRuntimeLog()
{
    NSArray* paths = NSSearchPathForDirectoriesInDomains(
        NSDocumentDirectory, NSUserDomainMask, YES);
    NSString* documents = [paths firstObject];
    NSString* logPath = [documents stringByAppendingPathComponent:@"MUUnity.log"];
    freopen([logPath fileSystemRepresentation], "a", stdout);
    freopen([logPath fileSystemRepresentation], "a", stderr);
    setvbuf(stdout, nullptr, _IONBF, 0);
    setvbuf(stderr, nullptr, _IONBF, 0);
    fprintf(stderr, "\n[MUBoot] process-start bundle=%s\n",
        [[[NSBundle mainBundle] bundleIdentifier] UTF8String]);
}

UnityFramework* UnityFrameworkLoad()
{
    NSString* bundlePath = nil;
    bundlePath = [[NSBundle mainBundle] bundlePath];
    bundlePath = [bundlePath stringByAppendingString: @"/Frameworks/UnityFramework.framework"];

    NSBundle* bundle = [NSBundle bundleWithPath: bundlePath];
    if ([bundle isLoaded] == false) [bundle load];

    UnityFramework* ufw = [bundle.principalClass getInstance];
    if (![ufw appController])
    {
        // unity is not initialized
        [ufw setExecuteHeader: &_mh_execute_header];
    }
    return ufw;
}

int main(int argc, char* argv[])
{
    @autoreleasepool
    {
        MUInstallRuntimeLog();
        fprintf(stderr, "[MUBoot] loading-unity-framework\n");
        id ufw = UnityFrameworkLoad();
        fprintf(stderr, "[MUBoot] unity-framework-loaded controller=%s\n",
            [ufw appController] ? "yes" : "no");
        [ufw runUIApplicationMainWithArgc: argc argv: argv];
        return 0;
    }
}
