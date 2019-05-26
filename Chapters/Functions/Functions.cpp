#include <cstdio>
#include "Functions.h"
using namespace std;


// You can declare a function like so
// void func();
// But you must define it elsewhere 

int main() {
	puts("This is main().\n");
	func();
	return 0;
}


// Example of a function
// We can put this function anywhere in the file
// So long as we have declared the function previously
void func() {
	puts("This is func().\n");
}