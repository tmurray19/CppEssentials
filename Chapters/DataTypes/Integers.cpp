#include <cstdio>
// Fixed size integers
#include <cstdint>
using namespace std;

// There are 8 bits in a byte
constexpr size_t byte = 8;

// Showcasing size of various integer data types
int integers() {
	// These values will change depending on what operating system you are working under

	// sizeof returns the size of a variable or data type in bytes

	// 8 bits
	printf("The size of char is %ld bits.\n", sizeof(char) * byte);
	// 16 bits
	// You can omit the int keyword here and it will still be legal
	printf("The size of short int is %ld bits.\n", sizeof(short int) * byte);
	// 32 bits
	printf("The size of int is %ld bits.\n", sizeof(int) * byte);
	// 32 bits
	printf("The size of long int is %ld bits.\n", sizeof(long int) * byte);
	// 64 bits
	printf("The size of long long int is %ld bits.\n", sizeof(long long int) * byte);
	// 32 bits
	printf("The size of float is %ld bits.\n", sizeof(float) * byte);
	// 64 bits
	printf("The size of double is %ld bits.\n", sizeof(double) * byte);
	// 64 bits
	printf("The size of long double is %ld bits.\n", sizeof(long double) * byte);



	// These numbers should all return the same value
	int x = 147;
	int xOct = 0223;
	int xHex = 0x0093;
	int xBin = 0b10010011;
	int xUnsigned = 147U;
	int xLong = 147L;
	int xLongLong = 147LL;

	printf("x = %d, xOct = %d, xHex = %d, xBin = %d\n", x, xOct, xHex, xBin);


	// Fixed size integers
	// These values are the same size on all systems
	printf("The size of int8_t is %ld bits.\n", sizeof(int8_t) * byte);
	printf("The size of int16_t is %ld bits.\n", sizeof(int16_t) * byte);
	printf("The size of int32_t is %ld bits.\n", sizeof(int32_t) * byte);
	printf("The size of int64_t is %ld bits.\n", sizeof(int64_t) * byte);

	/* Same Size, just not denoting the first bit for the sign
	printf("The size of uint8_t is %ld bits.\n", sizeof(uint8_t) * byte);
	printf("The size of uint16_t is %ld bits.\n", sizeof(uint16_t) * byte);
	printf("The size of uint32_t is %ld bits.\n", sizeof(uint32_t) * byte);
	printf("The size of uint64_t is %ld bits.\n", sizeof(uint64_t) * byte);
	*/

	// Floating point literals

	// These are the same, the 500 int is converted to a float
	float f = 500;
	printf("f is currently %f, with a size of %d.\n", f, sizeof(f) * byte);
	f = 500.0;
	printf("f is currently %f, with a size of %d.\n", f, sizeof(f) * byte);
	f = 5e2;
	printf("f is currently %f, with a size of %d.\n", f, sizeof(f) * byte);
	// Float begins to lose precision here, and can't show the value correctly
	f = 5e20;
	printf("f is currently %f, with a size of %d.\n", f, sizeof(f) * byte);
	// Doubles can though
	double df = 5e20;
	printf("df is currently %Lf, with a size of %d.\n", df, sizeof(df) * byte);
	df = .1+.1+.1;
	printf("df is currently %Lf, with a size of %d.\n", df, sizeof(df) * byte);
	// This should print out true
	// But it does not.
	// This is because doubles lose precision in exchange for scale
	if (df == 0.3) {
		puts("True.\n");
	}
	else {
		puts("False.\n");
	}
	// We can see that here
	printf("Value of df is %1.20Lf.\n", df);


	return 0;
}