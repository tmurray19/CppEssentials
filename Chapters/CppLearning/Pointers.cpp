#include <cstdio>

using namespace std;

/*

 A pointer is a variable that holds memory address of another variable. 
 A pointer needs to be dereferenced with * operator to access the memory location it points to.
 

A reference variable is an alias, that is, another name for an 
already existing variable. A reference, like a pointer is also implemented by storing the address of an object.
A reference can be thought of as a constant pointer (not to be confused with a pointer to a constant value!) 
with automatic indirection, i.e the compiler will apply the * operator for you.
 
 */


/*int main() {
	int x = 6;
	int y = 42;

	int* ip = &x;

	printf("The value of x is %d.\n", x);
	printf("The value of y is %d.\n", y);
	printf("The value of *ip is %d.\n", *ip);
	// printf("The value of ip is %d./n", ip);

	return 0;
}
*/

int pointers() {
	int x = 4;
	int* ip = &x;
	// y is a refrence to x
	int& y = x;

	// y references x, so updating y like so
	y = 42;
	// Will end up updating x

	int z = 423;
	ip = &z;

	printf("The value of x is %d.\n", x);
	printf("The value of y is %d.\n", y);
	printf("The value of *ip is %d.\n", *ip);
	printf("The value of z is %d.\n", z);


	return 0;

}