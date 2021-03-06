/* resource.h  -  Lua library  -  Public Domain  -  2013 Mattias Jansson / Rampant Pixels
 *
 * This library provides a cross-platform lua library in C11 for games and applications
 * based on out foundation library. The latest source code is always available at
 *
 * https://github.com/rampantpixels/lua_lib
 *
 * This library is put in the public domain; you can redistribute it and/or modify it without
 * any restrictions.
 *
 * The LuaJIT library is released under the MIT license. For more information about LuaJIT, see
 * http://luajit.org/
 */

#pragma once

/*! \file resource.h
    Binding for resource module */

#include <foundation/platform.h>

#include <lua/types.h>

LUA_API void
lua_symbol_load_resource(void);

LUA_API uint64_t
lua_resource_platform(void);

LUA_API void
lua_resource_set_platform(uint64_t platform);
