#include "Printed.h"

void Printed::output(deque<int> l1)
{
	for (unsigned int i = 0; i < l1.size(); ++i)
	{
		cout << "map['" << l1[i++] << "'] = " << l1[i] << endl;
	}
}

void Printed::output(deque<int> l1, deque<double> l2)
{
	for (unsigned int i = 0; i < l1.size() && i < l2.size(); ++i)
	{
		cout << "map['" << l1[i] << "'] = " << l2[i] << endl;
	}
}

void Printed::output(deque<double> l1)
{
	for (unsigned int i = 0; i < l1.size(); ++i)
	{
		cout << "map['" << l1[i++] << "'] = " << l1[i] << endl;
	}
}

void Printed::output(deque<double> l1, deque<int> l2)
{
	for (unsigned int i = 0; i < l1.size() && i < l2.size(); ++i)
	{
		cout << "map['" << l1[i] << "'] = " << l2[i] << endl;
	}
}
