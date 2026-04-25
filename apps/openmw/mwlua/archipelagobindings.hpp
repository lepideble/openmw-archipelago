#ifndef MWLUA_ARCHIPELAGOBINDINGS_H
#define MWLUA_ARCHIPELAGOBINDINGS_H

#include <sol/forward.hpp>

namespace MWLua
{
    struct Context;

    sol::table initArchipelagoPackage(const Context& context);
}

#endif // MWLUA_ARCHIPELAGOBINDINGS_H
