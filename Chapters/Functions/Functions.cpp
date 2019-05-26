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


// ####################################################################################

// Passing values to functions

/*void func(int i){*/

// We can change the value passed into the function using &
// changing it to const will stop this from happening

/*void func(const int & i){*/
void func(int & i) {
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

int main() {
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