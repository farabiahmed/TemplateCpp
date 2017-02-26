// A.cpp
#include "Letters/A.hpp"

A::A(void)
{
	cout<<"Class A Constructor"<<endl;
}

A::~A(void)
{
	cout<<"Class A Destructor"<<endl;
}

int A::DoSomethingComplex()
{
  return a_*=a_;
}
