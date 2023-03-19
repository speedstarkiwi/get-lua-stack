//make sure we get libs
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <stdio.h>

//in a console manner

int main(int argc, char *argv[]) {
    lua_State *L = luaL_newstate();
    luaL_openlibs(L); //optional
    int GAY = 10;//GAY

    lua_pushnumber(L, 10);
    lua_pushnumber(L, GAY + 10);
    lua_pushnumber(L, GAY + 20);

    int top = lua_gettop(L);//return the TOP
    printf("TOP OFFSET STACK ->>>>>> %d\n", top);//use in percentage

    lua_close(L);//close 
    getchar();//make sure we do this so the console dont close

    return 0;
}
