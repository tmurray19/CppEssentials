#include <cstdio>
using namespace std;

// Primitive Arrays
int primitiveArrays() {
	// Declares an array of type int, with a size of 5
	int ia[5];

	// Assigns 1 to first element of array
	ia[0] = 1;
	
	// Has the same result as above
	*ia = 1;

	// Assigns address of array to integer pointer ip
	int* ip = ia;

	// Assigns 2 to the first element of the array
	*ip = 2;

	// Increments the pointer
	// Points to the next element in array
	++ip;

	// Sets 3 as the second element of array
	*ip = 3;

	// Incrementing pointer and using it at the same time
	// Assigns 4 to the 3rd position of the array
	*(++ip) = 4;

	int preDefinedArray[5] = { 1, 2, 3, 4, 5 };

	return 0;
}

// Primitive Strings
int primitiveStrings() {
	// Also called a C string
	char s[] = "Stringy";
	char sArr[] = { 'S', 't', 'r', 'i', 'n', 'g', 'y', 0 };
	// A C string is a primitive array of characters terminated with a 0
	// These are the same
	printf("String is %s.\n", s);
	printf("String is %s.\n", sArr);

	// For loop showing that s[] is just an array
	for (int i = 0; s[i] != 0; i++) {
		printf("Char is %c.\n", s[i]);
	}

	printf("Pointers.\n");

	for (char* cp = s; *cp; ++cp) {
		printf("Char is %c.\n", *cp);
	}

	printf("Range loop.\n");


	for (char c : s) {
		if (c != 0) { 
			printf("Char is %c.\n", c);
		}
	}

	return 0;

}