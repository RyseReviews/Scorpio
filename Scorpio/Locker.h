#pragma once
#include "framework.h"

namespace Scorpio
{
	class Locker
	{
	private:
		static LPCBYTE LockerSkins(uintptr_t Enabled)
		{
			Enabled = false;
		}

		static LPCBYTE BackBlings(uintptr_t Enabled)
		{
			Enabled = false;
		}

		static LPCBYTE Pickaxe(uintptr_t Enabled)
		{
			Enabled = false;
		}

		static LPCBYTE Gliders(uintptr_t Enabled)
		{
			Enabled = false;
		}

		static LPCBYTE Emotes(uintptr_t Enabled)
		{
			Enabled = false;
		}

		static LPCBYTE Music(uintptr_t Enabled)
		{
			Enabled = false;
		}
	};
}