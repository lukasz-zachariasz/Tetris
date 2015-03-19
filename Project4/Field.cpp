#include "Field.h";
Field::Field()
{
	int color = 0;
	pc_object = nullptr;
}
Field::~Field()
{
	delete pc_object;
}
void Field::setObject_pointer(Objekt& data)
{
	pc_object = &data;
	color = data.getColor();
}
void Field::setObject_pointer(int x)
{
	pc_object = nullptr;
	color = 0;
}
void Field::setColor(int x)
{
	color = x;
}
int Field::getColor()
{
	return color;
}
const Objekt* Field::getObject()
{
	return pc_object;
}