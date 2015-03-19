#include "Field.h"
#include <vector>
class Game
{
public:
	Game();
	~Game();
	bool i_rowCheck(int i_array_number);
	Field* getField(int x, int y);
	void addObjekt(int x);
	void fillGameArray();
	bool falling(Objekt* obj);
private:
	Field **pc_GameArray;
	int score;
	std::vector < Objekt > data;
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























/*#include <string>
class CICanCopy{
public:
	CICanCopy();
	CICanCopy(std::string data);
	CICanCopy(const CICanCopy& copy);
	~CICanCopy();
	CICanCopy cConcatenate(CICanCopy *pcOther);
	CICanCopy& operator=(std::string data);
	CICanCopy& operator=(const CICanCopy& data);

	std::string *pcGetData() { return(pc_data); }
private:
	std::string *pc_data;
	};*/
/*#include "CICanCopy.h"
CICanCopy::CICanCopy()
{
	pc_data = new std::string;
}
CICanCopy::CICanCopy(std::string data)
{
	pc_data = new std::string(data);
	*pc_data = data;
}
CICanCopy::CICanCopy(const CICanCopy &data)
{
	pc_data = new std::string;
	*pc_data = *(data.pc_data);
}
CICanCopy::~CICanCopy()
{
	delete pc_data;
}
CICanCopy CICanCopy::cConcatenate(CICanCopy *pcOther)
{
	return (CICanCopy(*pc_data + *((*pcOther).pc_data)));
}
CICanCopy& CICanCopy::operator=(std::string data)
{
	*pc_data = data;
	return *this;
}
CICanCopy& CICanCopy::operator=(const CICanCopy & data)
{
	*pc_data = *(data.pc_data);
	return *this;
}

//*(new CICanCopy(data))*/