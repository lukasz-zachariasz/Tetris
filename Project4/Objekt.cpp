#include "game.h"

int Objekt::getColor()
{
	return color;
}

bool Objekt::isFalling()
{
	return falling;
}

void Objekt::setFalling(bool fall)
{
	falling = fall;
}

bool Objekt::isExist()
{
	return exist;
}

void Objekt::start()
{
	exist = true;
	falling = true;
}

bool Objekt::checkExist()
{
	if (x1 == -1 &&
		x2 == -1 &&
		x3 == -1 &&
		x4 == -1 &&
		y1 == -1 &&
		y2 == -1 &&
		y3 == -1 &&
		y4 == -1 )
	{
		exist = false;
	}
	return exist;
}

Objekt::Objekt()
{
	falling = false;
	rotation = 0;
	exist = false;
	color = 0;
	x1 = -1;
	x2 = -1;
	x3 = -1;
	x4 = -1;
	y1 = -1;
	y2 = -1;
	y3 = -1;
	y4 = -1;
}
Objekt::Objekt(int x)
{
	/*
	0-brak
	1-I
	2-T
	3-O
	4-L
	5-J
	6-S
	7-Z
	*/
	falling = false;
	rotation = 0;
	color = x;
	exist = false;
	switch (x)
	{
	case 1:
		x1 = 5;
		x2 = 5;
		x3 = 5;
		x4 = 5;
		y1 = 19;
		y2 = 18;
		y3 = 17;
		y4 = 16;
		break;
	case 2:
		x1 = 4;
		x2 = 5;
		x3 = 6;
		x4 = 5;
		y1 = 19;
		y2 = 19;
		y3 = 19;
		y4 = 18;
		break;
	case 3:
		x1 = 4;
		x2 = 5;
		x3 = 4;
		x4 = 5;
		y1 = 19;
		y2 = 19;
		y3 = 18;
		y4 = 18;
		break;
	case 4:
		x1 = 4;
		x2 = 4;
		x3 = 4;
		x4 = 5;
		y1 = 19;
		y2 = 18;
		y3 = 17;
		y4 = 17;
		break;
	case 5:
		x1 = 5;
		x2 = 5;
		x3 = 5;
		x4 = 4;
		y1 = 19;
		y2 = 18;
		y3 = 17;
		y4 = 17;
		break;
	case 6:
		x1 = 5;
		x2 = 4;
		x3 = 4;
		x4 = 3;
		y1 = 19;
		y2 = 19;
		y3 = 18;
		y4 = 18;
		break;
	case 7:
		x1 = 3;
		x2 = 4;
		x3 = 4;
		x4 = 5;
		y1 = 19;
		y2 = 19;
		y3 = 18;
		y4 = 18;
		break;
	default:
		x1 = -1;
		x2 = -1;
		x3 = -1;
		x4 = -1;
		y1 = -1;
		y2 = -1;
		y3 = -1;
		y4 = -1;
	}

}
Objekt::~Objekt()
{

}





/*
0-brak
1-I
2-T
3-O
4-L
5-J
6-S
7-Z
*/