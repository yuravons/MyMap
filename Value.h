#ifndef VALUE_H
#define VALUE_H

#include <type_traits>
#include <string>

using namespace std;

class Value
{
	string value;
	string type;
public:
	Value() = delete;
	template <typename T>
	Value(T obj);
	string getType();
	string getValue();
};

template <typename T>
Value::Value(T obj)
{
	type = typeid(T).name();
	value = to_string(obj);
}

#endif
