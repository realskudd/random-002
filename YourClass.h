#pragma once
#include "MyClass.h"

class YourClass : public MyClass
{	
public:
	YourClass();
	YourClass(int x);
	YourClass(YourClass* m);
	~YourClass();
	YourClass operator=(const YourClass& x);
	int getX();
};