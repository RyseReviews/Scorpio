#pragma once
#include "framework.h"

namespace Scorpio
{
	class FriendsList
	{
	public:
		static LPVOID NumberOfFriends(uintptr_t Number)
		{
			Number = 100;
		}

		static LPVOID AllowFriends(uintptr_t Allow)
		{
			Allow = true;
		}

		static LPVOID NumberOfFriendsWhenAccountCreated(uintptr_t Number, string Name, uintptr_t Online, string SkinImg_ID)
		{
			Number = 1;
			Name = "Ryse";
			Online = false;
			SkinImg_ID = "CID_034_Athena_Commando_F_Medieval";
		}
	};
}
