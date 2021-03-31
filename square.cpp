#include "square.h"
#include "Graphics.h"

square::square() :
	x0(20), y0(20), x1(80), y1(80), color(255, 255, 255) {}

square::square(int x0, int y0, int x1, int y1, Color c) :
	x0(x0), y0(y0), x1(x1), y1(y1), color(c) {}


square::square(int x0, int y0, Color c) :
	x0(x0), y0(y0), color(c) 
{
	y1 = y0 * 2;
	x1 = x0 * 2;
}

void square::set(int x0, int y0, int x1, int y1, Color c)
{
	this->x0 = x0;
	this->y0 = y0;
	this->x1 = x1;
	this->y1 = y1;
	color = c;
}

void square::set(int x0, int y0, Color c)
{
	this->x0 = x0;
	this->y0 = y0;
	this->x1 = x0 * 2;
	this->y1 = y0 * 2;
	color = c;
}
