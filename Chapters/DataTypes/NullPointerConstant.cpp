#include <cstdio>
using namespace std;

#ifndef NULL
#define NULL (0LL) //Common C++ definiton of NULL
#endif

void f(int i) {
	printf("The int is %d.\n", i);
}


// Here f is overloaded
void f(const char* s) {
	printf("The pointer is %p.\n", s);
}

// If we call f with an int, the top f is called
// If we call f with a string, the bottom f is called
// nullptr is a null pointer of any type, pointing to a 0 in memory
// Run the code to see details
int ambiguousNullPointer() {
	f(3);
	f("dsad");
	f(NULL);
	// Resolving ambiguous null pointer
	f(nullptr);
	return 0;
}