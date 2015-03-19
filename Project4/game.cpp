#include "game.h"


Field* Game::getField(int x, int y)
{
	return &(pc_GameArray[x][y]);
}
void Game::addObjekt(int x)
{
	data.push_back(Objekt(x));
}

bool Game::falling(Objekt* obj)
{

	if ((pc_GameArray[(*obj).x1][(*obj).y1 - 1].getObject() != nullptr && pc_GameArray[(*obj).x1][(*obj).y1 - 1].getObject() != obj)	||
		(pc_GameArray[(*obj).x2][(*obj).y2 - 1].getObject() != nullptr && pc_GameArray[(*obj).x2][(*obj).y2 - 1].getObject() != obj)	||
		(pc_GameArray[(*obj).x3][(*obj).y3 - 1].getObject() != nullptr && pc_GameArray[(*obj).x3][(*obj).y3 - 1].getObject() != obj)	||
		(pc_GameArray[(*obj).x4][(*obj).y4 - 1].getObject() != nullptr && pc_GameArray[(*obj).x4][(*obj).y4 - 1].getObject() != obj)	||
		(*obj).y1 - 1<0 || (*obj).y2 - 1<0 || (*obj).y3 - 1<0 || (*obj).y4 - 1<0)
	{
		(*obj).setFalling(false);
	}
	else
	{
		(*obj).y1--;
		(*obj).y2--;
		(*obj).y3--;
		(*obj).y4--;
	}
	return (*obj).isFalling();
}
void Game::fillGameArray()
{
	for (int i = 0; i < 10; i++)
	{
		for (int ii = 0; ii < 20; ii++)
		{
			pc_GameArray[i][ii].setColor(0);
			pc_GameArray[i][ii].setObject_pointer(5);
		}
	}
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].isExist())
		{
			pc_GameArray[data[i].x1][data[i].y1].setColor(data[i].getColor());
			pc_GameArray[data[i].x1][data[i].y1].setObject_pointer(data[i]);
			pc_GameArray[data[i].x2][data[i].y2].setColor(data[i].getColor());
			pc_GameArray[data[i].x2][data[i].y2].setObject_pointer(data[i]);
			pc_GameArray[data[i].x3][data[i].y3].setColor(data[i].getColor());
			pc_GameArray[data[i].x3][data[i].y3].setObject_pointer(data[i]);
			pc_GameArray[data[i].x4][data[i].y4].setColor(data[i].getColor());
			pc_GameArray[data[i].x4][data[i].y4].setObject_pointer(data[i]);
		}
	}
}

Game::Game()
{
	score = 0;


	pc_GameArray = new Field*[10];
	for (int i = 0; i < 10; i++)
	{
		pc_GameArray[i] = new Field[20];
		for (int ii = 0; ii < 20; ii++)
		{
			pc_GameArray[i][ii] = Field();
		}
	}

}
Game::~Game()
{
	for (int i = 0; i < 10;i++)
	{
		delete[] pc_GameArray[i];
	}
	delete[] pc_GameArray;
}