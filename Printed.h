#ifndef PRINTED_H
#define PRINTED_H

#include <deque>
#include <iostream>

using namespace std;

class Printed
{
public:
	void output(deque<int> l1);
	void output(deque<int> l1, deque<double> l2);
	void output(deque<double> l1);
	void output(deque<double> l1, deque<int> l2);
};

#endif
