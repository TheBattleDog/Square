#pragma once
#include "Colors.h"
struct square
{
	int x0; 
	int y0;
	int x1, y1;
	Color color; // Square Color
	
	square();
	square(int x0, int y0, int x1, int y1, Color c);
	square(int x0, int y0, Color c);

	void set(int y0, int x0, int x1, int y1, Color c);

	void set(int x0, int y0, Color c);
};

