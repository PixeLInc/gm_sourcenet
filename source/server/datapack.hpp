#pragma once

#include "main.hpp"

namespace DataPack
{
	void PreInitialize( GarrysMod::Lua::ILuaBase *LUA );

	void Initialize( GarrysMod::Lua::ILuaBase *LUA );

	void Deinitialize( GarrysMod::Lua::ILuaBase *LUA );
}
