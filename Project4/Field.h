#include "Objekt.h"
class Field
{
public:
	Field();
	~Field();
	void setColor(int x);
	void setObject_pointer(Objekt& data);
	void setObject_pointer(int x);
	int getColor();
	const Objekt* getObject();
private:
	int color;
	Objekt *pc_object;
};