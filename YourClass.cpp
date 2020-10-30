#include "YourClass.h"

YourClass::YourClass() :MyClass()
{

}

YourClass::YourClass(int x) : MyClass(x)
{

}

YourClass::YourClass(YourClass* x)
{
	this->x = x->x;
}

YourClass YourClass::operator=(const YourClass& r)
{
	return new YourClass(r.x);
}

int YourClass::getX()
{
	return this->x * 10;
}