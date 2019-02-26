#include "Map.h"
#include "Printed.h"
#include "Value.h"

int main()
{
	Value v1 = 2;
	Value v2 = 1.412;
	Value v3 = 4;
	Value v4 = 0.1133;
	Value v5 = 6;
	Value v6 = 20.112;
	Value v7 = 8;
	Value v8 = 23.211;

	MyMap map;
	map.insert(v1, v2);
	map.insert(v3, v4);
	map.insert(v5, v6);
	map.insert(v7, v8);
	map.print();

	system("pause");
	return 0;
}