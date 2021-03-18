/**
*Driver file to demonstrate linking
*Minitut 1, 2015
*Author: Benjamin Hugo
*/

#include <iostream>
#include "factorial.h"

#define FACT(x) (Tutorial1::factorial(x))

int main (int argc, char** argv){
	using namespace std; //never use "using namespace" outside a scope... very bad practice, especially if you do it out of scope in a header file
	cout << "The factorial of 0 is: " << FACT(0) << endl;
	cout << "The factorial of 1 is: " << FACT(1) << endl;
	cout << "The factorial of 5 is: " << FACT(5) << endl;
	cout << "The factorial of 13 is: " << FACT(13) << endl;
	return 0; //successful exit status
}
