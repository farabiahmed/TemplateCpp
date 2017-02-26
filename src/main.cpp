// A hello world program in C++

#include <iostream>
#include "Letters/A.hpp"
#include "Letters/B.hpp"

using namespace std;

int main()
{
	cout << "Hello World!"<<endl;
	A a;
	a.Set(5);
	a.DoSomethingComplex();
	cout << a.Get() << endl;

	B b;
	b.Set(6);
	b.DoSomethingComplex();
	cout << b.Get() << endl;
	
	return 0;
}
