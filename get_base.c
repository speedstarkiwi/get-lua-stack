//gay lua files
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <stdio.h>

int function_for_base_GAY(lua_State *L) {
    int base = lua_gettop(L) - lua_gettop(L);
    printf("base %d\n", base);//percentage
    base = 0;//smart kool
    return 0;
}

int main(int argc, char *argv[]) {//console example
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);

   
    lua_pushnumber(L, 10);
    lua_pushnumber(L, 10 + 10);
    lua_pushnumber(L, 10 + 10);

    lua_pushcfunction(L, function_for_base_GAY);
    lua_insert(L, 1);//move it
    lua_call(L, lua_gettop(L)-1, 0); //call the function

    lua_close(L);//close
    getchar();
    return 0;
}
