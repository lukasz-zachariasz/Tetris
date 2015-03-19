class Objekt
{
public:
	Objekt();
	Objekt(int x);
	~Objekt();
	int getColor();
	bool isFalling();
	void setFalling(bool fall);
	bool isExist();
	bool checkExist();
	void start();
	int x1, x2, x3, x4; //1-10
	int y1, y2, y3, y4;	//1-20
	int rotation;
private:
	bool falling;
	bool exist;
	int color;

};
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