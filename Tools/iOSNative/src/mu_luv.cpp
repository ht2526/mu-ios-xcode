// iOS implementation of the small, project-specific `luv` API used by
// Assets/Test/LuaDll/builtin/serv/tcp_client.lua. All Lua callbacks run from
// tcp:update(), keeping Unity/Lua access on the main thread.

extern "C" {
#include "lua.h"
#include "lauxlib.h"
}

#include <arpa/inet.h>
#include <cerrno>
#include <chrono>
#include <cstring>
#include <fcntl.h>
#include <netdb.h>
#include <new>
#include <string>
#include <sys/select.h>
#include <sys/socket.h>
#include <unistd.h>

namespace {

constexpr const char* kMeta = "mu.luv.tcp";

enum class State {
    Closed = 0,
    Connecting = 1,
    Connected = 2,
};

struct Tcp {
    int fd = -1;
    State state = State::Closed;
    int zipLevel = -1;
    int connectRef = LUA_NOREF;
    int errorRef = LUA_NOREF;
    int readRef = LUA_NOREF;
    int closeRef = LUA_NOREF;
    int logRef = LUA_NOREF;
    std::string peer;
    std::string pending;
};

static Tcp* check(lua_State* L, int index = 1) {
    return static_cast<Tcp*>(luaL_checkudata(L, index, kMeta));
}

static void unref(lua_State* L, int& ref) {
    if (ref != LUA_NOREF && ref != LUA_REFNIL) {
        luaL_unref(L, LUA_REGISTRYINDEX, ref);
    }
    ref = LUA_NOREF;
}

static void setCallback(lua_State* L, int& ref, int index) {
    unref(L, ref);
    if (!lua_isnoneornil(L, index)) {
        luaL_checktype(L, index, LUA_TFUNCTION);
        lua_pushvalue(L, index);
        ref = luaL_ref(L, LUA_REGISTRYINDEX);
    }
}

static void pushSelf(lua_State* L, int selfIndex) {
    lua_pushvalue(L, selfIndex);
}

static void invoke(lua_State* L, int ref, int selfIndex, const char* text = nullptr,
                   size_t length = 0) {
    if (ref == LUA_NOREF || ref == LUA_REFNIL) {
        return;
    }
    lua_rawgeti(L, LUA_REGISTRYINDEX, ref);
    pushSelf(L, selfIndex);
    int argc = 1;
    if (text != nullptr) {
        lua_pushlstring(L, text, length);
        ++argc;
    }
    if (lua_pcall(L, argc, 0, 0) != LUA_OK) {
        lua_pop(L, 1);
    }
}

static void closeSocket(Tcp* tcp) {
    if (tcp->fd >= 0) {
        ::close(tcp->fd);
        tcp->fd = -1;
    }
    tcp->state = State::Closed;
    tcp->pending.clear();
}

static bool splitAddress(const std::string& input, std::string& host,
                         std::string& port) {
    std::string value = input;
    const auto scheme = value.find("://");
    if (scheme != std::string::npos) {
        value.erase(0, scheme + 3);
    }
    const auto slash = value.find('/');
    if (slash != std::string::npos) {
        value.erase(slash);
    }
    if (value.empty()) {
        return false;
    }
    if (value.front() == '[') {
        const auto end = value.find(']');
        if (end == std::string::npos || end + 2 > value.size() ||
            value[end + 1] != ':') {
            return false;
        }
        host = value.substr(1, end - 1);
        port = value.substr(end + 2);
    } else {
        const auto colon = value.rfind(':');
        if (colon == std::string::npos) {
            return false;
        }
        host = value.substr(0, colon);
        port = value.substr(colon + 1);
    }
    return !host.empty() && !port.empty();
}

static int returnError(lua_State* L, const char* message) {
    lua_pushboolean(L, 0);
    lua_pushstring(L, message);
    return 2;
}

static int tcp_error_cb(lua_State* L) {
    setCallback(L, check(L)->errorRef, 2);
    lua_settop(L, 1);
    return 1;
}

static int tcp_read_cb(lua_State* L) {
    setCallback(L, check(L)->readRef, 2);
    lua_settop(L, 1);
    return 1;
}

static int tcp_close_cb(lua_State* L) {
    setCallback(L, check(L)->closeRef, 2);
    lua_settop(L, 1);
    return 1;
}

static int tcp_log_cb(lua_State* L) {
    setCallback(L, check(L)->logRef, 2);
    lua_settop(L, 1);
    return 1;
}

static int tcp_connect(lua_State* L) {
    Tcp* tcp = check(L);
    size_t inputLength = 0;
    const char* input = luaL_checklstring(L, 2, &inputLength);
    setCallback(L, tcp->connectRef, 3);
    closeSocket(tcp);

    std::string host;
    std::string port;
    if (!splitAddress(std::string(input, inputLength), host, port)) {
        return returnError(L, "invalid address; expected host:port");
    }

    addrinfo hints{};
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;
    addrinfo* result = nullptr;
    const int resolve = getaddrinfo(host.c_str(), port.c_str(), &hints, &result);
    if (resolve != 0) {
        return returnError(L, gai_strerror(resolve));
    }

    int lastError = ECONNREFUSED;
    for (addrinfo* item = result; item != nullptr; item = item->ai_next) {
        const int fd = socket(item->ai_family, item->ai_socktype, item->ai_protocol);
        if (fd < 0) {
            lastError = errno;
            continue;
        }
        const int flags = fcntl(fd, F_GETFL, 0);
        if (flags < 0 || fcntl(fd, F_SETFL, flags | O_NONBLOCK) < 0) {
            lastError = errno;
            ::close(fd);
            continue;
        }
#if defined(SO_NOSIGPIPE)
        int one = 1;
        setsockopt(fd, SOL_SOCKET, SO_NOSIGPIPE, &one, sizeof(one));
#endif
        const int status = ::connect(fd, item->ai_addr, item->ai_addrlen);
        if (status == 0 || errno == EINPROGRESS) {
            tcp->fd = fd;
            tcp->state = status == 0 ? State::Connected : State::Connecting;
            tcp->peer = host + ":" + port;
            lastError = 0;
            break;
        }
        lastError = errno;
        ::close(fd);
    }
    freeaddrinfo(result);

    if (tcp->fd < 0) {
        return returnError(L, std::strerror(lastError));
    }
    if (tcp->state == State::Connected) {
        invoke(L, tcp->connectRef, 1);
    }
    lua_pushboolean(L, 1);
    return 1;
}

static bool flushPending(Tcp* tcp, std::string& error) {
    while (!tcp->pending.empty()) {
        const ssize_t sent = ::send(tcp->fd, tcp->pending.data(), tcp->pending.size(), 0);
        if (sent > 0) {
            tcp->pending.erase(0, static_cast<size_t>(sent));
            continue;
        }
        if (sent < 0 && (errno == EAGAIN || errno == EWOULDBLOCK)) {
            return true;
        }
        error = sent == 0 ? "socket closed while sending" : std::strerror(errno);
        return false;
    }
    return true;
}

static int tcp_send(lua_State* L) {
    Tcp* tcp = check(L);
    size_t size = 0;
    const char* data = luaL_checklstring(L, 2, &size);
    if (tcp->state != State::Connected || tcp->fd < 0) {
        return returnError(L, "socket is not connected");
    }
    tcp->pending.append(data, size);
    std::string error;
    if (!flushPending(tcp, error)) {
        closeSocket(tcp);
        invoke(L, tcp->errorRef, 1, error.data(), error.size());
        return returnError(L, error.c_str());
    }
    lua_pushboolean(L, 1);
    return 1;
}

static int tcp_update(lua_State* L) {
    Tcp* tcp = check(L);
    if (tcp->fd < 0 || tcp->state == State::Closed) {
        lua_pushboolean(L, 0);
        return 1;
    }

    if (tcp->state == State::Connecting) {
        fd_set writable;
        FD_ZERO(&writable);
        FD_SET(tcp->fd, &writable);
        timeval timeout{};
        const int selected = select(tcp->fd + 1, nullptr, &writable, nullptr, &timeout);
        if (selected > 0 && FD_ISSET(tcp->fd, &writable)) {
            int errorCode = 0;
            socklen_t length = sizeof(errorCode);
            getsockopt(tcp->fd, SOL_SOCKET, SO_ERROR, &errorCode, &length);
            if (errorCode != 0) {
                const std::string message = std::strerror(errorCode);
                closeSocket(tcp);
                invoke(L, tcp->errorRef, 1, message.data(), message.size());
                lua_pushboolean(L, 0);
                return 1;
            }
            tcp->state = State::Connected;
            invoke(L, tcp->connectRef, 1);
        }
    }

    if (tcp->state == State::Connected) {
        std::string sendError;
        if (!flushPending(tcp, sendError)) {
            closeSocket(tcp);
            invoke(L, tcp->errorRef, 1, sendError.data(), sendError.size());
            lua_pushboolean(L, 0);
            return 1;
        }

        char buffer[64 * 1024];
        for (;;) {
            const ssize_t received = recv(tcp->fd, buffer, sizeof(buffer), 0);
            if (received > 0) {
                invoke(L, tcp->readRef, 1, buffer, static_cast<size_t>(received));
                continue;
            }
            if (received == 0) {
                closeSocket(tcp);
                invoke(L, tcp->closeRef, 1);
            } else if (errno != EAGAIN && errno != EWOULDBLOCK) {
                const std::string message = std::strerror(errno);
                closeSocket(tcp);
                invoke(L, tcp->errorRef, 1, message.data(), message.size());
            }
            break;
        }
    }

    lua_pushboolean(L, tcp->state == State::Connected);
    return 1;
}

static int tcp_close(lua_State* L) {
    Tcp* tcp = check(L);
    const bool wasOpen = tcp->state != State::Closed;
    closeSocket(tcp);
    if (wasOpen) {
        invoke(L, tcp->closeRef, 1);
    }
    lua_pushboolean(L, 1);
    return 1;
}

static int tcp_status(lua_State* L) {
    lua_pushinteger(L, static_cast<int>(check(L)->state));
    return 1;
}

static int tcp_memory(lua_State* L) {
    lua_pushinteger(L, static_cast<lua_Integer>(check(L)->pending.capacity()));
    return 1;
}

static int tcp_setziplevel(lua_State* L) {
    check(L)->zipLevel = static_cast<int>(luaL_checkinteger(L, 2));
    lua_settop(L, 1);
    return 1;
}

static int tcp_getziplevel(lua_State* L) {
    lua_pushinteger(L, check(L)->zipLevel);
    return 1;
}

static int tcp_name(lua_State* L, bool peer) {
    Tcp* tcp = check(L);
    if (tcp->fd < 0) {
        lua_pushnil(L);
        return 1;
    }
    sockaddr_storage address{};
    socklen_t size = sizeof(address);
    const int result = peer ? getpeername(tcp->fd, reinterpret_cast<sockaddr*>(&address), &size)
                            : getsockname(tcp->fd, reinterpret_cast<sockaddr*>(&address), &size);
    if (result != 0) {
        lua_pushnil(L);
        return 1;
    }
    char host[NI_MAXHOST]{};
    char service[NI_MAXSERV]{};
    if (getnameinfo(reinterpret_cast<sockaddr*>(&address), size, host, sizeof(host),
                    service, sizeof(service), NI_NUMERICHOST | NI_NUMERICSERV) != 0) {
        lua_pushnil(L);
        return 1;
    }
    lua_pushfstring(L, "%s:%s", host, service);
    return 1;
}

static int tcp_getpeername(lua_State* L) { return tcp_name(L, true); }
static int tcp_getsockname(lua_State* L) { return tcp_name(L, false); }

static int tcp_gc(lua_State* L) {
    Tcp* tcp = check(L);
    closeSocket(tcp);
    unref(L, tcp->connectRef);
    unref(L, tcp->errorRef);
    unref(L, tcp->readRef);
    unref(L, tcp->closeRef);
    unref(L, tcp->logRef);
    tcp->~Tcp();
    return 0;
}

static int luv_create(lua_State* L) {
    void* memory = lua_newuserdata(L, sizeof(Tcp));
    new (memory) Tcp();
    luaL_getmetatable(L, kMeta);
    lua_setmetatable(L, -2);
    return 1;
}

static int luv_startloop(lua_State* L) {
    lua_pushboolean(L, 1);
    lua_pushliteral(L, "ios-main-thread-poll");
    return 2;
}

static int luv_gettime(lua_State* L) {
    using Clock = std::chrono::steady_clock;
    const auto seconds = std::chrono::duration<double>(Clock::now().time_since_epoch()).count();
    lua_pushnumber(L, seconds);
    return 1;
}

static const luaL_Reg kMethods[] = {
    {"connect", tcp_connect},
    {"send", tcp_send},
    {"update", tcp_update},
    {"close", tcp_close},
    {"status", tcp_status},
    {"memory", tcp_memory},
    {"setziplevel", tcp_setziplevel},
    {"getziplevel", tcp_getziplevel},
    {"getpeername", tcp_getpeername},
    {"getsockname", tcp_getsockname},
    {"error_cb", tcp_error_cb},
    {"read_cb", tcp_read_cb},
    {"close_cb", tcp_close_cb},
    {"log_cb", tcp_log_cb},
    {"__gc", tcp_gc},
    {nullptr, nullptr},
};

static const luaL_Reg kModule[] = {
    {"create", luv_create},
    {"startloop", luv_startloop},
    {"gettime", luv_gettime},
    {nullptr, nullptr},
};

}  // namespace

extern "C" int luaopen_luv(lua_State* L) {
    luaL_newmetatable(L, kMeta);
    luaL_setfuncs(L, kMethods, 0);
    lua_pushvalue(L, -1);
    lua_setfield(L, -2, "__index");
    lua_pop(L, 1);

    luaL_newlib(L, kModule);
    return 1;
}
