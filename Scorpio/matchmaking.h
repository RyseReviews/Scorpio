#pragma once
#include "framework.h"

namespace Scorpio
{
	class MatchMaking
	{
	public:
		static LPVOID CurrentGameRegions(string Names, uintptr_t NumberOfPlayersForAllGames)
		{
			Names = "NAEest", "NAWest", "Europe", "Middle East", "Asia", "OCE";
			NumberOfPlayersForAllGames = 100;
		}
	};
}