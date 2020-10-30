#include "MyClass.h"

MyClass::MyClass()
{
	x = 0;
}

MyClass::MyClass(int y)
{
	x = y;
}

MyClass::MyClass(MyClass* m)
{
	x = m->x;
}

MyClass::~MyClass()
{

}

int MyClass::getX()
{
	return x;
}

MyClass MyClass::operator=(const MyClass& x)
{
	return new MyClass(x.x);
}