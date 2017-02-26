// classB.hpp
#ifndef B_HPP
#define B_HPP


#include <iostream>

using namespace std;

class B {
	public:
		// only declaration in the .h unless only a short initialization list is used.

		B(void); // This is the constructor declaration
		
		~B(void); // This is the destructor declaration

		inline int Get() const {
			return b_;
		}

		inline void Set(int value){
			b_ = value;
		}

		int DoSomethingComplex(); // only declaration

	private:
		int b_;
 };

#endif
