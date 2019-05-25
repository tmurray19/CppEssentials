//Covers
/*
Ternary operators
Dynamic Memory operators
*/

#include <cstdio>
#include <new>
using namespace std;

// Ternary operators
int ternary() {
	
	int x = 5;
	int y = 24;

	// Three operands for a ternary operator
	// first part x > y ? 
	// Before the ? is the statement to be tested
	// second part "Yes.\n" :
	// Before the : is the code ran if the statement is true
	// third part "No.\n";
	// This runs if the statement is false
	const char* s = x > y ? "Yes.\n" : "No.\n";


	puts(s);
	return 0;
}

// Dynamic Memory operator
/*
The new and delete operators are used to allocate and free memory in C++
*/

constexpr size_t count = 1024;

int dynamicMemoryAllocation() {
	printf("allocate space for %lu long int at *ip with new.\n", count);

	// Allocate (empty) array in memory space
	long int* ip;

	// Try to make the array unless memory is full
	try {
		// Make the array of size count (1024)
		ip = new long int[count];
	}
	// Catch statment incase ram is full
	catch (std::bad_alloc& ba) {
		fprintf(stderr, "Cannot allocate memory (%s).\n", ba.what());
		return 1;
	}

	// initialize array (fill it with 1024 numbers from 0 to 1023
	for (long int i = 0; i < count; ++i) {
		ip[i] = i;
	}

	// print array
	for (long int i = 0; i < count; ++i) {
		printf("%ld ", ip[i]);
	}
	puts("");

	// deallocate array
	// IF YOU ALLOCATE SOMETHING IN MEMORY WITH new YOU MUST ALSO DEALLOCATE THAT MEMORY LIKE SO
	// We use [] because we have allocated more than one object in the memory space
	// if it was only one object, then we would just use delete ip
	// ip is a pointer that points to a space in memory where we started our array
	delete[] ip;
	puts("space at *ip deleted.\n");

	return 0;
}
