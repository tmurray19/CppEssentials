#include <cstdio>
using namespace std;


// String showcasing
int strings() {

	// Same string
	char cstring[] = "String";
	const char * cStringPointer = "String";
	// If we change the line above to this
	// const char * const cStringPointer = "String";
	// The line below becomes illegal
	// The first const declares the POINTER to be a const, not the string
	cStringPointer = "Brown Sauce";

	// Foo Bar
	const char * concatenatedString = "Foo" " Bar";


	printf("The cstring array is: %s.\n", cstring);

	for (unsigned int i = 0; cstring[i]; i++) {
		printf("%02d: %c\n", i, cstring[i]);
	}

	// Same result
	printf("The cStringPointer is: %s.\n", cStringPointer);

	for (unsigned int i = 0; cStringPointer[i]; i++) {
		printf("%02d: %c\n", i, cStringPointer[i]);
	}

	printf("The concatenatedString is: %s.\n", concatenatedString);

	for (unsigned int i = 0; concatenatedString[i]; i++) {
		printf("%02d: %c\n", i, concatenatedString[i]);
	}


	// Escape characters
	// \n is new line
	// \t is a tab
	// \u for unicode
	// etc.
	puts("Hello, World!		 \" \' \\ \x40 \u03bc");




	// Qualifiers - Used to adjust qualities of an object/variable

	/*
	There are two types of qualifiers
	CV Storage, and Storage Duration
	e.g const static int i = 42;

	CV Qualifiers - CV = Constant, Volatile:
	const - Read only/immutable variable (can only be assigned a value, and not changed)
	volatile - Can be changed by other processes (Multi threading)
	mutable - makes data member writable from a const qualified member function
	
	Storage Duration - defines the duration or lifetime of a variable (Lifetime is the duration of the block by default):
	static - Static variables have life beyond the execution of a block - duration of the program - stored globally - by default a variable defined outside of any block is static.
	register - Stored in processor registers. This can make them faster and easier to access.
	extern -  Defined in a separate translation unit and are linked with your code by the linker step of the compilation process. 

	*/
	return 0;
}