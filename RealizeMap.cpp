#include "Map.h"

void MyMap::insert(Value obj1, Value obj2)
{
	if (obj1.getType() == "int")
	{
		iDeque.push_back(atoi(obj1.getValue().c_str()));
		isKey = true;
	}
	else if (obj1.getType() == "double")
	{
		dDeque.push_back(atof(obj1.getValue().c_str()));
		isKey = false;
	}
	if (obj2.getType() == "int")
	{
		iDeque.push_back(atoi(obj2.getValue().c_str()));
	}
	else if (obj2.getType() == "double")
	{
		dDeque.push_back(atof(obj2.getValue().c_str()));
	}
}
void MyMap::print()
{
	Printed obj;
	if (iDeque.empty())
	{
		obj.output(dDeque);
	}
	else if (dDeque.empty())
	{
		obj.output(iDeque);
	}
	else if (isKey)
	{
		obj.output(iDeque, dDeque);
	}
	else
	{
		obj.output(dDeque, iDeque);
	}
}