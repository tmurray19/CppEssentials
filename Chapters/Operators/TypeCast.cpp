// Covers:
/*
TypeCasting
sizeof
typeid
*/
#include <cstdio>
#include <typeinfo>
#include <string>
using namespace std;

// Type casting
int typeCasting() {

	int x = 5;
	long long int y;

	// x can easily go into the memory space of y, as x is an int
	// which takes up a much smaller space than y
	// the reverse is not necessarily true, y may not be able to go into x
	y = x;
	// Unless, we cast it as an int
	// We know that our y value is 5, and can easily fit inside our x value
	x =  (int) y;

	// There is a limit to casting, however
	// The below is not legal code

	const char* s = "String.";
	x = (int)s;

	printf("x is %d.\n", x);
	printf("y is %lld.\n", y);
	
	return 0;
}

// Using sizeof
int sizeOfShowcase() {
	int x = 5;
	// int is 4 bytes
	// size_t will always be compatable with sizeof in your OS
	// sizeof is an operator, but it can be called as a function
	size_t y = sizeof(x);
	// I.E. These two lines are the same
	y = sizeof x;


	// Ditto for printout with %zd and printf
	printf("Size of x is %zd.\n", y);


	// Practical example
	// how big is this struct?

	struct X {
		int a;
		int b;
		char c;
		char d;
		long long int e;
		long long int f;
	};


	// We can see its 32 bytes
	printf("Size of X is %zd.\n", sizeof(X));


	return 0;
}

// typeid
struct A { int x; };
struct B { int x; };

A al;
B bl;

int typeId() {
	// Even though the structs are identical
	printf("Type is %s.\n", typeid(A).name());
	if (typeid(al) == typeid(A)) {
		puts("Same.\n");
	}
	else {
		puts("Different.\n");
	}
	
	// They are considered different types
	printf("Type is %s.\n", typeid(string).name());
	if (typeid(bl) == typeid(A)) {
		puts("Same.\n");
	}
	else {
		puts("Different.\n");
	}

	return 0;
}
