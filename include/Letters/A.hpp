// classA.hpp
#ifndef A_HPP
#define A_HPP


#include <iostream>

using namespace std;

/**
*  @brief Class A as an example
*/  
class A {
	public:
		// only declaration in the .h unless only a short initialization list is used.

		A(void); // This is the constructor declaration
		
		~A(void); // This is the destructor declaration

		inline int Get() const {
			return a_;
		}

		inline void Set(int value){
			a_ = value;
		}

		int DoSomethingComplex(); // only declaration

	private:
		int a_;
 };

#endif
