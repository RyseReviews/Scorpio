#pragma once
#include "framework.h"

//Fortnite Content Pages In C++

namespace Scorpio
{
	class ContentPages
	{
	public:
		static VOID FortniteLogoReplace(string scorpioImg, uintptr_t Replaced)
		{
			Replaced = true;
			scorpioImg = "https://scorpio.fortnite_img_loading.dev";
		}

		static PVOID UpdateBox(string Title, string Body)
		{
			Title = "Scorpio";
			Body = R"(
			Welcome To Scorpio Fortnite Private Server!
			Created By Ryse)";
		}

		static PVOID GameModes_STW(string Title, string Body, uintptr_t Access)
		{
			Title = "Soon";
			Body = R"(
			Save The World Is Coming Soon
			To Scorpio!)";
			Access = false; //Will change once save the world is supported[Current: UnSupported]
		}

		static PVOID GameModes_BR(string Title, string Body, uintptr_t Access)
		{
			Title = "ScorpioBR";
			Body = "Welcome To ScorpioFN!";
			Access = true;
		}

		static PVOID GameModes_Creative(string Title, string Body, uintptr_t Access)
		{
			Title = "Scorpio Creative";
			Body = R"(
			Creative Is Supported With Scorpio!
			Create Any Map You Want As Well
			As Publish Your Maps In The
			Scorpio Discord Server!)";
			Access = true;
		}

		static PVOID Tabs_Play(string Name)
		{
			Name = "Scorpio";
		}
		
		static PVOID Tabs_BattlePass(string Name, uintptr_t AllowNameChanged)
		{
			Name = "Battle Pass";
			AllowNameChanged = false;
		}

		static PVOID Tabs_Challenges(string Name, uintptr_t AllowNameChanged)
		{
			Name = "Challenges"; //There will be more lines that are named (Quests) which is the same thing as Challenged :/
			AllowNameChanged = false;
		}

		static PVOID Tabs_SeasonPass(string Name)
		{
			Name = "Scorpio Season Pass";
		}

		static PVOID Tabs_Lobby(string Name)
		{
			Name = "Scorpio";
		}

		static PVOID Tabs_ItemShop(string Name, uintptr_t AllowNameChanged)
		{
			Name = "Item Shop";
			AllowNameChanged = false;
		}

		static PVOID Tabs_VBucks(string Name, uintptr_t AllowNameChanged, uintptr_t AllowVBuckPurchases)
		{
			Name = "VBucks";
			AllowNameChanged = false;
			AllowVBuckPurchases = false;
		}

		static PVOID Tabs_Carrer(string Name, uintptr_t AllowNameChanged)
		{
			Name = "Carrer";
			AllowNameChanged = false;
		}

		static PVOID Tabs_Quests(string Name, uintptr_t AllowNameChanged)
		{
			Name = "Quests";
			AllowNameChanged = false;
		}

	private: //This is for Save The World At The Moment
		static LPCBYTE SaveTheWorld_ButtonDisabled(uintptr_t ButtonPressed)
		{
			ButtonPressed = false;
		}

	public:
		static LPVOID Options_Credits(string Name)
		{
			Name = "Credits";
		}

		static LPVOID Options_ExitButton(string Name)
		{
			Name = "Close";
		}

		static LPVOID Options_SettingsButton(string Name, uintptr_t AllowNameChanged)
		{
			Name = "Settings";
			AllowNameChanged = false;
		}

		static LPVOID LobbyUpdateBox(string Title, string Body)
		{
			Title = "Scorpio Fortnite Server";
			Body = R"(
			Welcome To Scorpio Fortnite Private Server!
			Created By Ryse)";
		}

		static DWORD ImagesForFortniteUpdatesInLobby(string FirstImg, string SecondImg, string BodyFirst, string BodySecond)
		{
			FirstImg = "https://scorpio.ScorpioLogo.dev";
			SecondImg = "https://scorpio.DiscordImg.dev";
			BodyFirst = "Enjoy Scorpio Fortnite Server!";
			BodySecond = "Join The Scorpio Discord Server!";
		}
	};
}