#include <cstdio>
using namespace std;


// Do and While (loops)
int doAndWhileLoops() {
	// Initialise array and int i 
	int array[] = { 1, 2, 3, 4, 5 };
	int i = 0;

	// While loop that iterates through array
	// (Technically, it just runs from 0 to 4
	// But that happens to be the lenght of our array)
	while (i < 5) {
		// Code sees that i equals 2, and it ends the loop
		if (i == 2)  break;
		printf("Element %d is %d.\n", i, array[i]);
		++i;
	}

	puts("First loop ended.\n");
	i = 0;

	while (i < 5) {
		// Code sees that i equals 2, and it skips it
		if (i == 2) {
			++i;
			// Continue skips this block of code, and returns to the very top of the loop
			continue;
		};
		printf("Element %d is %d.\n", i, array[i]);
		++i;
	}


	puts("Second loop ended.\n");
	i = 0;


	// Do loop
	// Does everythin in the do block
	// First loop will always occur in this case
	do {
		printf("Element %d is %d.\n", i, array[i]);
		++i;
	} 
	// While this code is true
	while (i < 5);


	return 0;

}


// For loops
int forLoops() {

	// For loop
	// Define starting position
	// Ending position (or while clause)
	// Number of steps taken between blocks
	// So,i starts at 0, & increments by one, until i is not less than 5 anymore
	for (int i = 0; i < 5; i++) {
		printf("i is %d.\n", i);
	}

	puts("Break.\n");

	// Define C string
	char string[] = "abcdefg";

	// String[i] is true
	// So long as there is a character in the i-th position
	// Which becomes false once i becomes 7 ( I.E, there is no 7th character in the string)
	for (int i = 0; string[i]; i++) {
		printf("i is %c.\n", string[i]);
	}

	// Pointers are also usable
	puts("Break.\n");

	// Same result as above
	for (char* cp = string; *cp; ++cp) {
		printf("*cp is %c.\n", *cp);
	}

	return 0;
}


// Ranged-based for loops [ for ( char i : string, ...){ ...}]
int RangedBasedForLoops() {

	int array[] = { 1, 2, 3, 4, 5 };

	// For each int i in the array
	for (int i : array) {
		printf("i is %d.\n", i);
	}


	puts("Break.\n");


	char s[] = "string";

	// Null termiatior is also included in this
	for (char c : s) {
		// This line stops null terminator from printing
		if (c == 0) break;
		printf("c is %c.\n", c);
	}

	// This is also legal code
	for (char c : "string") {
		if (c == 0) break;
		printf("c is %c.\n", c);
	}

	return 0;
}