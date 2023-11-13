#pragma once

#include "header.hpp"

namespace ASCII
{
	char convertToAscii(int r, int g, int b)
	{
        	int intensityGray = (int)(0.299 * r + 0.587 * g + 0.114 * b);

        	char charList[] = { ' ', '.', ':', '-', '=', '+', '*', '#', '%', '@' };
		
        	return charList[intensityGray * sizeof(charList) / 256];
	}
}
