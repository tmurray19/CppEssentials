// Hello.cpp - Taidgh Murray - Chapter 2
// Meant to explore the very basics of C++
// More commenting

/*
multi
line
comment
*/

// Preprocessor statement
// Replaces this line with the content found in cstdio
#include <cstdio>
// #include <iostream>

using namespace std;

// Function declaration
// main is automatically called by the OS
int main() {
	puts("Hello, World!");
	// printf("Hello, World!");
	// cout << "Hello, World!" << endl;
	return 0;
}


/*
old standard

// int argc - count of the arguments in the array
// char ** argv - an array of character pointers that represent argumemnt

int main(int argc, char ** argv) {
	puts("Hello, World!");
	return 0;
}

int main(int argc, char * argv[]) {
	puts("Hello, World!");
	return 0;
}

*/