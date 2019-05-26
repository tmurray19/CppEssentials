#include <cstdio>
#include "Functions.h"
#include <string>
using namespace std;


// You can declare a function like so
// void func();
// But you must define it elsewhere 

int declaringFunctions() {
	puts("This is main().\n");
	declaringFunc();
	return 0;
}


// Example of a function
// We can put this function anywhere in the file
// So long as we have declared the function previously
void declaringFunc() {
	puts("This is func().\n");
}


// Passing values to functions

/*void func(int i){*/

// We can change the value passed into the function using &
// changing it to const will stop this from happening

/*void func(const int & i){*/
void passingArguments(int & i) {
	i = 54;
	printf("This is func(int %d).\n", i);
	printf("Value changed.\n");
}

/*void pointerFunc(const int & i){*/
void pointerFunc(int* i) {
	*i = 52;
	printf("This is func(int %d).\n", *i);
	printf("Value changed.\n");

}

void stringPointerFunc(const string & s) {
	printf("Value is %s.\n", s.c_str());
}

int passingArgumentsToFunctions() {
	/*
	int h = 4231;
	puts("This is main().\n");
	//func(42);
	printf("h value is %d.\n",h);
	//func(h);
	pointerFunc(&h);
	printf("h value is %d.\n", h);
	return 0;
	*/

	string s = "This is a string.\n";
	stringPointerFunc(s);

	return 0;
}

// Using automatic and static variables

void staticFunc() {
	// Value is incremented each time
	// func is called
	int i = 5;
	// j is static, so changes are kept between calls
	static int j = 5;
	printf("i is the value %d.\n", ++i);
	printf("j is the value %d.\n", ++j);
	printf("\n");
}

int staticCall() {
	puts("This is main()");
	// The i variable currently has function scope
	// So the changes are not kept between function calls
	staticFunc();
	staticFunc();
	staticFunc();
	return 0;
}

// Returning values from a function

// void means function doesn't return anything
int func(int i) {

	return i * 2;
}

// Returning large objects
const string & stringFunc() {
	const static string s = "This is a relatively large object, a string, found in func().\n";
	return s;
}


int main() {
	puts("This is main().\n");


	int x = func(42);
	printf("x is %d.\n", x);

	const string s = stringFunc();
	printf("stringFunc() returns %s\.\n", s.c_str());

	return 0;
}