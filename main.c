#include <stdio.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

int main(int argc, char* argv[]){
  lua_State* L = luaL_newstate();
  luaL_openlibs(L);
  if(luaL_dofile(L, "foo.lua") < 0){
    printf("an error occured an i have no idea how to figured out what it was\n");
  }
  lua_close(L);
  return 0;
}
