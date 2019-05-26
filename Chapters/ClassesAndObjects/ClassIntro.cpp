// A simple class
#include <cstdio>
using namespace std;

class C1 {
	//private:
		// the default is private, so the above line is unnecessary
	int i = 0;
public:
	// These are our methods
	void setValue(int value) { i = value; };
	int getValue() { return i; };
	// Here's the ideal way to write out functions for classes
	// Define the class here like so
	int doubleValue();
};

// To declare a function as part of a class
// define the function like so
int C1::doubleValue() {
	return i * 2;
}


int classIntro() {
	int i = 9;
	// Create an instace of the class
	C1 classObject;

	classObject.setValue(i);
	printf("Value has been set to %d.\n", classObject.getValue());
	return 0;
}