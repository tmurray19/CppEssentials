#include <cstdio>
using namespace std;

int conditionals() {

	int x = 15;
	int y = 16;
	

	// 0 is false, 1 is true
	printf("Value is %d.\n", x > y);
	printf("Value is %d.\n", x < y);


	if (x > y) {
		puts("Condition is true.\n");
	}
	else if (y > 112) {
		puts("Else if is true.\n");
	}
	else {
		puts("Condition is false.\n");
	}

	// Ternary conditions
	printf("The greater value is %d.\n", x > y ? x : y);


	puts("Hello, World!");
	return 0;
}

// Switching statements
int switches() {
	const int ONE = 1;
	const int TWO = 2;
	const int THREE = 3;
	const int FOUR = 4;

	int x = 3;

	// Tests value its passed in
	// Looks for one it matches
	switch (x) {
		case ONE:
			puts("One.");
			break;
		case TWO:
			puts("Two.");
			break;
		// x = THREE in this case
		case THREE:
			puts("Three.");
			// Breaks out of the block
			break;
		// Without break, this line would also run
		case FOUR:
			puts("Four.");
			break;
		// This code runs if none of the cases match
		default:
			puts("Default.");
			break;
	}

	puts("After the switch.");

	return 0;
}