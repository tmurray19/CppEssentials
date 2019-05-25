// Covers:

/*
Logical operators
Relationship operators
Bitwise operators
*/


#include <cstdio>
#include <cstdint>
using namespace std;



// Relational operators
int relationshipOperators() {
	int x = 5;
	int y = 24;

	// Equality
	if (x == y) {
		puts("True.\n");
	}
	else {
		puts("False.\n");
	}

	// Inequality
	if (x != y) {
		puts("True.\n");
	}
	else {
		puts("False.\n");
	}

	// Less than
	if (x < y) {
		puts("True.\n");
	}
	else {
		puts("False.\n");
	}

	// Greater than than
	if (x > y) {
		puts("True.\n");
	}
	else {
		puts("False.\n");
	}

	// Less than or equal to 
	if (x <= y) {
		puts("True.\n");
	}
	else {
		puts("False.\n");
	}

	// Greater than than or equal to
	if (x >= y) {
		puts("True.\n");
	}
	else {
		puts("False.\n");
	}


	return 0;

}


// Logical operators
int logicalOperators() {
	
	bool a = true;
	bool b = false;

	// Logical AND - &&
	if (a && b) {
		puts("True.\n");
	}
	else {
		puts("False.\n");
	}

	// Logical OR - ||
	if (a || b) {
		puts("True.\n");
	}
	else {
		puts("False.\n");
	}


	// Logical NOT - !
	// Just reverses the outcome
	if (!(a || b)) {
		puts("True.\n");
	}
	else {
		puts("False.\n");
	}

	return 0;
}

// Bitwise operators

// This function turns an unsigned 8bit int to a char * (a c string)
const char* u8_to_cstr(const uint8_t& x) {
	static char buf[sizeof(x) * 8 + 1];
	for (char& c : buf)
		c = 0;
	char* bp = buf;
	for (uint8_t bitmask = 0b10000000; bitmask; bitmask >>= 1) {
		*(bp++) = x & bitmask ? '1' : '0';
	}
	return buf;
}

int bitwiseOperators() {
	// 0000 0101
	uint8_t x = 5;
	uint8_t xx = 7;
	// 0000 1010
	uint8_t y = 10;
	// bitwise OR - |
	// checks the values of each bit
	// if either value is 1
	// that values bit gets set as 1 in z
	// so its
	// 0000 1111
	uint8_t z = x | y;
	// bitwise AND - &
	// checks the values of each bit
	// if BOTH value is 1
	// that values bit gets set as 1 in z
	// x and y share no common 1 bits
	// so its
	// 0000 0000
	uint8_t w = x & y;
	// bitwise XOR - ^
	// Only sets bit as 1, if the two bits are DIFFERENT
	// in an OR operator, as soon as one of the statements is true, the gate is 'passed', so to speak
	// and the operation returns true
	// eXclusive OR checks to see that both inputs in a gate are exclusive
	// 1,1 on an OR gate outputs 1, 1,1 on an XOR gate outputs 0
	uint8_t n = xx ^ y;
	// bitwise NOT - ~
	// flips the value of all the bits
	uint8_t yy = ~y;
	// bitshift operators << x & >> x
	// shifts all teh bits to the left or right by x bits
	// Shifts to the right by two bits
	uint8_t bitshiftLeft = y << 2;

	uint8_t bitshiftRight = y >> 3;



	printf("x is %s\n", u8_to_cstr(x));
	printf("y is %s\n", u8_to_cstr(y));
	printf("result (z) is %s\n", u8_to_cstr(z));
	printf("w is %s\n", u8_to_cstr(w));
	printf("xx is %s\n", u8_to_cstr(xx));
	printf("n is %s\n", u8_to_cstr(n));
	printf("yy is %s\n", u8_to_cstr(yy));


	printf("bitshiftLeft is %s\n", u8_to_cstr(bitshiftLeft));
	printf("bitshiftRight is %s\n", u8_to_cstr(bitshiftRight));


	return 0;
}