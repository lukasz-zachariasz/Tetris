#include <GL/glut.h>
#include "game.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void initalizeGame()
{
	Game* game = new Game();
	srand(time(NULL));
}

void Back()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0); //MainWindow
	glBegin(GL_POLYGON);
	glVertex2f(-0.95, -0.95);
	glVertex2f(-0.95, 0.75);
	glVertex2f(0.20, 0.75);
	glVertex2f(0.20, -0.95);
	glEnd();

	for (int i = 0; i < 10; i++)
	{
		for (int ii = 0; ii < 20; ii++)
		{
			
		}
	}



	glColor3f(0.0, 0.5, 1.0); //Lines
	for (int i = 0; i < 9; i++)
	{
		glBegin(GL_LINES);
		glVertex2f(-0.95+0.115+0.115*i, -0.95);
		glVertex2f(-0.95+0.115+0.115*i, 0.75);
		glEnd();
	}
	for (int i = 0; i < 19; i++)
	{
		glBegin(GL_LINES);
		glVertex2f(-0.95, -0.95+0.085+0.085*i);
		glVertex2f(0.20, -0.95+0.085+0.085*i);
		glEnd();
	}


	glColor3f(1.0, 1.0, 1.0); //NextWindow
	glBegin(GL_POLYGON);
	glVertex2f(0.30, 0.60);
	glVertex2f(0.75, 0.60);
	glVertex2f(0.75, 0.30);
	glVertex2f(0.30, 0.30);
	glEnd();

	glFlush();
	glutSwapBuffers();

}
int main(int argc, char * argv[])
{
	initalizeGame();
	glutInit(&argc, argv);
	glutInitWindowSize(450, 600);
	glutCreateWindow("Tetris");
	glutDisplayFunc(Back);
	glutMainLoop();
	return 0;
}
