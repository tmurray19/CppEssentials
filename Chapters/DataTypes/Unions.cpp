#include <cstdio>
#include <cstdint>
using namespace std;

// Unions allow you to use the same memory space for different types

// For providing different representations of the same data
union ipv4 {
	uint32_t i32;
	// Struct takes up the same amout of space as the i32 variable
	struct {
		uint8_t a;
		uint8_t b;
		uint8_t c;
		uint8_t d;
	} octets;
};

int unions() {
	union ipv4 addr;
	addr.octets = { 192, 168, 1, 254 };
	printf("My IP address is %d.%d.%d.%d is %08x.\n", addr.octets.a, addr.octets.b, addr.octets.c, addr.octets.d, addr.i32);
	return 0;
}