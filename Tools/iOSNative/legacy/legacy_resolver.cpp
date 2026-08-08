#include <dlfcn.h>
#include <mach-o/dyld.h>
#include <pthread.h>

#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace {

pthread_mutex_t g_mutex = PTHREAD_MUTEX_INITIALIZER;
void* g_handle = nullptr;

void* openLegacyFramework() {
    uint32_t size = 0;
    _NSGetExecutablePath(nullptr, &size);
    if (size == 0) {
        return nullptr;
    }

    char* executable = static_cast<char*>(std::malloc(size));
    if (executable == nullptr) {
        return nullptr;
    }

    void* result = nullptr;
    if (_NSGetExecutablePath(executable, &size) == 0) {
        char* slash = std::strrchr(executable, '/');
        if (slash != nullptr) {
            *slash = '\0';
            const char suffix[] =
                "/Frameworks/LegacyNative.framework/LegacyNative";
            const size_t pathSize =
                std::strlen(executable) + sizeof(suffix);
            char* path = static_cast<char*>(std::malloc(pathSize));
            if (path != nullptr) {
                std::snprintf(path, pathSize, "%s%s", executable, suffix);
                result = dlopen(path, RTLD_LAZY | RTLD_LOCAL);
                std::free(path);
            }
        }
    }

    std::free(executable);
    return result;
}

}  // namespace

extern "C" void* mu_legacy_resolve(const char* symbol) {
    if (symbol == nullptr || *symbol == '\0') {
        std::abort();
    }

    pthread_mutex_lock(&g_mutex);
    if (g_handle == nullptr) {
        g_handle = openLegacyFramework();
        if (g_handle == nullptr) {
            std::fprintf(
                stderr,
                "[MULegacyBridge] dlopen failed: %s\n",
                dlerror());
            pthread_mutex_unlock(&g_mutex);
            std::abort();
        }
    }

    dlerror();
    void* target = dlsym(g_handle, symbol);
    const char* error = dlerror();
    pthread_mutex_unlock(&g_mutex);

    if (target == nullptr || error != nullptr) {
        std::fprintf(
            stderr,
            "[MULegacyBridge] dlsym(%s) failed: %s\n",
            symbol,
            error == nullptr ? "unknown error" : error);
        std::abort();
    }
    return target;
}
