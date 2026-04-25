#include "archipelagobindings.hpp"

#include <components/lua/luastate.hpp>

#include "context.hpp"

namespace MWLua
{
    sol::table initArchipelagoPackage(const Context& context)
    {
        auto view = context.sol();

        view.open_libraries(sol::lib::package);

        sol::table api(view, sol::create);

        api["APClient"] = view.script("return require \"lua-apclientpp\"");

        return api;
    }
}
