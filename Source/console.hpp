#pragma once

#include "header.hpp"

namespace Console
{
	void printFrame(char buffer[WSCREEN][HSCREEN])
	{
		//Y = 1 as a fix to a small bug.
		for (int y = 1; y < HSCREEN; y++)
		{
			for (int x = 0; x < WSCREEN; x++)
			{
				cout << buffer[x][y];
			}
			cout << '\n';
		}
	}

	void clearScreen(void)
	{
		system("cls");
	}

	void configcmd(void)
	{
		system("color 0F");
		system("mode con cols=80 lines=26");
		system("cls");
	}
}
