// B.cpp
#include "Letters/B.hpp"

B::B(void)
{
	cout<<"Class B Constructor"<<endl;
}

B::~B(void)
{
	cout<<"Class B Destructor"<<endl;
}

int B::DoSomethingComplex()
{
  return b_*=b_;
}
