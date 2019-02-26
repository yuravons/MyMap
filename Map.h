#ifndef MAP_H
#define MAP_H

#include "Printed.h"
#include "Value.h"

class MyMap
{
private:
	deque<int> iDeque;
	deque<double> dDeque;
	bool isKey;
public:
	void insert(Value obj1, Value obj2);
	void print();
};

#endif