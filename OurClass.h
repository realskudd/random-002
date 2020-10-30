#pragma once
// It's a very very fine class
#include "MyClass.h"
#include "YourClass.h"

class OurClass
{
private:
	MyClass* m;
	YourClass* y;

public:
	OurClass();
	OurClass(MyClass* m, YourClass* y);
};