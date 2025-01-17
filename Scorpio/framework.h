#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>
#include <stdio.h>
#include <winscard.h>
#include <string>
#include <fstream>
#include <iostream>
#include <cstdio>
#include <psapi.h>
#include <sstream>
#include <ratio>
#include <windows.gaming.xboxlive.h>

using namespace std;

//Server

#ifdef _DEV
#define BUILD_ID "Dev"
#elif _PROD
#define BUILD_ID "Prod"
#else
#define BUILD_ID "Unknown"
#endif

#ifdef _DEV
#define HOST_URL "http://localhost"
#else
#define HOST_URL "https://scorpio.api.dev"
#endif

//Scorpio Namespace Use Of Uints
namespace Scorpio
{
	int PRINT_TYPES_DLL(uintptr_t isOnline, uintptr_t isOffline, uintptr_t isUpdate)
	{
		if (isOnline == true)
		{
			printf("Server Is Online!: ", HOST_URL, "\n");
			return true;
		}

		else if (isOffline == true)
		{
			printf("Server Is Offline!: ", HOST_URL, "\n");
			ENDSESSION_CLOSEAPP;
		}
		
		else if (isUpdate == true)
		{
			printf("Scorpio Has An Update!\n Please Download The New Scorpio Dll!\n");
			ENDSESSION_CLOSEAPP;
		}

		else
		{
			return 0;
		}
	}
}

//typedefs

typedef struct EasyAntiCheatSystem
{
	const bool isPath(string FindPath = "FortniteGame\\Binaries\\Win64\\EasyAntiCheat\\EasyAntiCheat_EOS_Setup.exe");
	const bool IsDllMsg(string message = "Starting Fortnite EAC!");
};

//Discord User URL Connection

#ifdef DISCORD_DEV
#define DISCORD_ID "Dev"
#elif DISCORD_PROD
#define DISCORD_ID "Prod"
#else
#define DISCORD_ID "Discord_Account"
#endif

#ifdef DISCORD_DEV
#define DISCORD_URL_CONNECT "[]"
#else
#define DISCORD_URL_CONNECT "https://scorpio.discord_account.dev"
#endif