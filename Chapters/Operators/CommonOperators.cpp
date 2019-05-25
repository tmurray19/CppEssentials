// Common Operators in C++
// Covers
/*
Assignment and arithmetic operators
Compound assignment operators
Incrementing and decrementing opertators (with pointers)
*/

#include <cstdio>
using namespace std;

int commonOperators() {

	// Assignment operator
	int x = 5;
	int y = 54;
	// Arithmetic operators
	x = y + x;
	y = y * y;
	x = y - x;
	x = x / y;
	x = 5;
	y = 54;
	x = y % x;
	y = -y;

	printf("x is %d, y is %d.\n", x, y);

	return 0;
}

// Compount Assignment operators
int compoundAssignment() {
	int x = 5;
	int y = 54;

	// x is 59
	x += y;
	printf("x += y is %d.\n", x);
	x -= y;
	printf("x -= y is %d.\n", x);
	x *= y;
	printf("x *= y is %d.\n", x);
	x /= y;
	printf("x /= y is %d.\n", x);	
	x %= y;
	printf("x mod= y is %d.\n", x);

	return 0;
}

// Increment and decrement operators
int incremetAndDecrementOperators() {
	// Increment - prefix
	// Incrementing, then evaluating
	int i = 0;
	printf("i starts at %d.\n", i);
	printf("i is now %d.\n", ++i);
	printf("i is now %d.\n", ++i);
	printf("i is now %d.\n", ++i);
	printf("i is now %d.\n", ++i);
	printf("i is now %d.\n", ++i);
	printf("i is now %d.\n", ++i);

	int j = 0;
	// Increment - suffix 
	// Evaluating, then incrementing
	printf("j starts at %d.\n", j);
	printf("j is now %d.\n", j++);
	printf("j is now %d.\n", j++);
	printf("j is now %d.\n", j++);
	printf("j is now %d.\n", j++);
	printf("j is now %d.\n", j++);
	printf("j is now %d.\n", j++);

	// This proves they are the same value
	if (i == j) {
		puts("True.\n");
	}
	else {
		puts("False.\n");
	}


	// Same amount of print statements
	// But j's last output is 5


	// Decrementing - prefix
	// Incrementing, then evaluating
	printf("i starts at %d.\n", i);
	printf("i is now %d.\n", --i);
	printf("i is now %d.\n", --i);
	printf("i is now %d.\n", --i);
	printf("i is now %d.\n", --i);
	printf("i is now %d.\n", --i);
	printf("i is now %d.\n", --i);

	// Decrementing - suffix 
	// Evaluating, then incrementing
	printf("j starts at %d.\n", j);
	printf("j is now %d.\n", j--);
	printf("j is now %d.\n", j--);
	printf("j is now %d.\n", j--);
	printf("j is now %d.\n", j--);
	printf("j is now %d.\n", j--);
	printf("j is now %d.\n", j--);

	// This proves they are the same value
	if (i == j) {
		puts("True.");
	}
	else {
		puts("False.");
	}


	return 0;
}

// Increment and decrement operators with pointers

void printp(char* p) {
	printf("Pointer is %p, value is %d.\n", p, *p);
}

int pointer() {
	char arr[5] = { 1, 2, 3, 4, 5 };
	char* p = arr;
	printp(p++);
	printp(p++);
	printp(p++);

	printp(p--);
	printp(p--);
	printp(p--);


	printp(++p);
	printp(++p);
	printp(p);

	printp(--p);
	printp(--p);
	printp(p);


	return 0;
}