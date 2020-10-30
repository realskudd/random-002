#pragma once
class MyClass
{
protected:
	int x;

public:
	MyClass();
	MyClass(int x);
	MyClass(MyClass* m);
	~MyClass();
	MyClass operator=(const MyClass& x);
	virtual int getX();
};