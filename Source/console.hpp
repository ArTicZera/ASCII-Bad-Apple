#pragma once

#include "header.hpp"

namespace Console
{
	void printFrame(char buffer[WSCREEN][HSCREEN])
	{
		for (int y = 0; y < HSCREEN; y++)
		{
			for (int x = 0; x < WSCREEN; x++)
			{
				cout << buffer[x][y];
			}
			cout << endl;
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