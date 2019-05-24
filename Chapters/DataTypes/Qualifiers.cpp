#include <cstdio>
using namespace std;

// Showcasing qualifiers

class S {
	public:
		int static_value() {
			static int x = 7;
			return ++x;
		}
	
};


int func() {
	// Defines x as 7
	// No qualifier, so it returns the value to 7 each time the function is called
	// It has block scope
	// int x = 7;
	
	// This code will ensure that the value gets incremented each time
	// Because it is static, it has global scope
	static int x = 7;

	// Returns the value of x, incremented by 1
	return ++x;
}

int qualifier_showcase() {
	// Can't change i if the below line is uncommented
	//const int i = 42;
	int i = 42;
	//i = 6;
	// i will always say 8 
	i = func();
	printf("The integer is %d.\n", i);
	i = func();
	printf("The integer is %d.\n", i);
	i = func();
	printf("The integer is %d.\n", i);


	printf("\n");

	S a;
	S b;
	S c;

	// This showcases an interesting quirk of static variables
	// The value x above is static
	// That means it is defined and shared across ALL instances of the class
	// So, when the static_value() function is called
	// It gets incremented each time
	// and results in a different value below
	printf("a.static_value() is %d.\n", a.static_value());
	printf("b.static_value() is %d.\n", b.static_value());
	printf("c.static_value() is %d.\n", c.static_value());



	return 0;
}