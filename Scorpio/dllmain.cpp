// dllmain.cpp : Defines the entry point for the DLL application.
#include "framework.h"
#include "contentpages.h"
#include "CustomFunctions.h"
#include "friends_list.h"
#include "Locker.h"
#include "matchmaking.h"
#include "Shop.h"


//
static Scorpio::ContentPages* pages;
static Scorpio::CustomFunctions* functions;
static Scorpio::FriendsList* list;
static Scorpio::Locker* locker;
static Scorpio::MatchMaking* mm;
static Scorpio::Shop* sh;
//

DWORD WINAPI Main(LPVOID lpParam)
{
    pages = new Scorpio::ContentPages;
    functions = new Scorpio::CustomFunctions;
    list = new Scorpio::FriendsList;
    locker = new Scorpio::Locker;
    mm = new Scorpio::MatchMaking;
    sh = new Scorpio::Shop;
    return 0;
}
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        printf("Launching Scorpio!");
        printf("Starting Content Pages");
        printf("Starting MatchMaking");
        printf("Setting Item Shop Configuration!");
        printf("Enabling Edit On Release Setting...");
        Scorpio::PRINT_TYPES_DLL;
        pages->GameModes_BR;
        pages->GameModes_STW;
        pages->FortniteLogoReplace;
        pages->GameModes_Creative;
        pages->ImagesForFortniteUpdatesInLobby;
        pages->LobbyUpdateBox;
        pages->Options_Credits;
        pages->Options_ExitButton;
        pages->Options_SettingsButton;
        pages->Tabs_BattlePass;
        pages->Tabs_Carrer;
        pages->Tabs_Challenges;
        pages->Tabs_ItemShop;
        pages->Tabs_Lobby;
        pages->Tabs_Play;
        pages->Tabs_Quests;
        pages->Tabs_SeasonPass;
        pages->Tabs_VBucks;
        pages->UpdateBox;

        functions->AllowEditOnReleaseInChapter1;

        list->AllowFriends;
        list->NumberOfFriends;
        list->NumberOfFriendsWhenAccountCreated;

        mm->CurrentGameRegions;

        sh->Daily1;
        sh->Daily2;
        sh->Daily3;
        sh->Daily4;
        sh->Daily5;
        sh->Daily6;
        sh->Featured1;
        sh->Featured2;

        CreateThread(0, 0, Main, hModule, 0, 0);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

