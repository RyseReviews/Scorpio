#pragma once
#include "framework.h"

namespace Scorpio
{
	class CustomFunctions
	{
	public:
		static BOOL AllowEditOnReleaseInChapter1(uintptr_t Enable, string SetButtonIsSettingsMenu)
		{
			Enable = true;
			SetButtonIsSettingsMenu = "Edit On Release";
			if (Enable == true)
			{
				return true;
			}

			else
			{
				return false;
				Enable = false;
			}
		}
	};
}