# get-lua-stack-top base

Simply grabs the `top` stack or offset from the `lua_State` with the power of `pushnumber` and `gettop`.

It also grabs `base` as well.

# how does it work?

We push 3 numbers using the PushNumber function onto stack and then we use `lua_gettop()` to get the index of top. It will return if lua state is created.

# what can this be used for?

literally...nothing.......except..for...nothing..

# what does it return?

both lua state base and lua state top stack.
