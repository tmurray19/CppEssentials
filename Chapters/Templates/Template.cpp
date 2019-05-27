// Exploring templates
// Generic functions - they are type agnostic

// Template functions
#include <cstdio>
#include <string>
using namespace std;

// You can use class instead of typename
// But typename is less ambiguous
// Angle brackets make it a template function
template <typename T>
// Returns type T, takes two types T as arguments ( a and b )
T maxof(T a, T b) {
	return (a > b ? a : b);

}

int templateFunctions(int argc, char** argv) {
	int l = maxof <int>(7, 9);
	// This line just compares the pointers
	const char* m = maxof<const char*>("nine", "seven");
	const char* n = maxof<const char*>("seven", "nine");
	// This line actually compares strings
	string r = maxof<string>("seven", "nine");
	printf("Max is : %s.\n", m);
	printf("Max is : %s.\n", n);
	printf("Max is : %d.\n", l);
	printf("Max is : %s.\n", r.c_str());
	return 0;
}
