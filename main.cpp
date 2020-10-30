#include <iostream>
#include "MyClass.h"
#include "YourClass.h"
using std::cout;
using std::endl;



int main()
{
	// MyClass is a simple return-what-i-have type thing
	MyClass* m = new MyClass(5);
	MyClass* n = m;

	// YourClass extends MyClass and returns what it has multiplied by 10
	YourClass* x = new YourClass(5);
	YourClass* y = x;

	cout << "Here are some objects I built:" << endl;

	cout << "M::x => " << m->getX() << endl
		 << "N::x => " << n->getX() << endl
		 << "X::x => " << x->getX() << endl
		 << "Y::x => " << y->getX() << endl
		 ;

	return 0;
}