#include <cstdio>
#include <string>
#include <typeinfo>
#include <vector>
using namespace std;

// typeDef

// _t is a naming convention
// to know that its a typedef
typedef unsigned char points_t;
typedef unsigned char rank_t;


struct score {
	points_t p;
	rank_t r;
};



int typeDef() {
	
	score s = { 5, 1 };

	printf("Score s has %d points and rank of %d.\n", s.p, s.r);

	return 0;
}


// Void type


// Void means that no return function is allowed or required
// In C++ you are more likely to see nothing in the arguments as opposed to a void
void func(void) {
	puts("This is void func ( void ). \n");
}

int voidShowcasre() {
	puts("Calling func()...\n");
	func();
	return 0;
}

// Auto type

string stringFunc() {
	return string("This is a string");
}

int autoShowcase() {
	// The auto keyword automatically assigns the varaible to be the same data type as stringFunc()
	auto x = stringFunc();
	printf("x is %s.\n", x.c_str());
	if (typeid(x) == typeid(string)) puts("x is a string.\n");
	return 0;
}

// More practical example
int autoPracticalExample() {
	vector<int> vi = { 1, 2, 3, 4, 5 };
	// Here's how you're supposed to iterate through a vector in C++
	for (vector<int>::iterator it = vi.begin(); it != vi.end(); ++it) {
		printf("Int is %d.\n", *it);
	}
	
	printf("\n");

	// Here's how you can do it using auto
	for (auto it = vi.begin(); it != vi.end(); ++it) {
		printf("Int is %d.\n", *it);
	}
	return 0;
 
}