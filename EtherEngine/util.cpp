#include "util.h"

SDL_Point GetPointParam(lua_State* L, int index, const char* funName)
{
	SDL_Point point;
	if (!lua_istable(L, index))
	{
		luaL_error(L, "bad argument #%d to '%s' (table expected, got %s)", index, funName, luaL_typename(L, index));
	}
	else
	{
		lua_getfield(L, index, "x");
		lua_isnumber(L, -1) ? point.x = lua_tonumber(L, -1) : luaL_error(L, "bad argument #%d to '%s' (table must have number value for key 'x', got %s)", index, funName, luaL_typename(L, -1));
		lua_getfield(L, index, "y");
		lua_isnumber(L, -1) ? point.y = lua_tonumber(L, -1) : luaL_error(L, "bad argument #%d to '%s' (table must have number value for key 'y', got %s)", index, funName, luaL_typename(L, -1));
	}

	return point;
}


SDL_Rect GetRectParam(lua_State* L, int index, const char* funName)
{
	SDL_Rect rect;
	if (!lua_istable(L, index))
	{
		luaL_error(L, "bad argument #%d to '%s' (table expected, got %s)", index, funName, luaL_typename(L, index));
	}
	else
	{
		lua_getfield(L, index, "x");
		lua_isnumber(L, -1) ? rect.x = lua_tonumber(L, -1) : luaL_error(L, "bad argument #%d to '%s' (table must have number value for key 'x', got %s)", index, funName, luaL_typename(L, -1));
		lua_getfield(L, index, "y");
		lua_isnumber(L, -1) ? rect.y = lua_tonumber(L, -1) : luaL_error(L, "bad argument #%d to '%s' (table must have number value for key 'y', got %s)", index, funName, luaL_typename(L, -1));
		lua_getfield(L, index, "w");
		lua_isnumber(L, -1) ? rect.w = lua_tonumber(L, -1) : luaL_error(L, "bad argument #%d to '%s' (table must have number value for key 'w', got %s)", index, funName, luaL_typename(L, -1));
		lua_getfield(L, index, "h");
		lua_isnumber(L, -1) ? rect.h = lua_tonumber(L, -1) : luaL_error(L, "bad argument #%d to '%s' (table must have number value for key 'h', got %s)", index, funName, luaL_typename(L, -1));
	}

	return rect;
}

SDL_Color GetColorParam(lua_State* L, int index, const char* funName)
{
	SDL_Color color;
	if (!lua_istable(L, index))
	{
		luaL_error(L, "bad argument #%d to '%s' (table expected, got %s)", index, funName, luaL_typename(L, index));
	}
	else
	{
		lua_getfield(L, index, "r");
		lua_isnumber(L, -1) ? color.r = lua_tonumber(L, -1) : luaL_error(L, "bad argument #%d to '%s' (table must have number value for key 'r', got %s)", index, funName, luaL_typename(L, -1));
		lua_getfield(L, index, "g");
		lua_isnumber(L, -1) ? color.g = lua_tonumber(L, -1) : luaL_error(L, "bad argument #%d to '%s' (table must have number value for key 'g', got %s)", index, funName, luaL_typename(L, -1));
		lua_getfield(L, index, "b");
		lua_isnumber(L, -1) ? color.b = lua_tonumber(L, -1) : luaL_error(L, "bad argument #%d to '%s' (table must have number value for key 'b', got %s)", index, funName, luaL_typename(L, -1));
		lua_getfield(L, index, "a");
		lua_isnumber(L, -1) ? color.a = lua_tonumber(L, -1) : luaL_error(L, "bad argument #%d to '%s' (table must have number value for key 'a', got %s)", index, funName, luaL_typename(L, -1));
	}

	return color;
}