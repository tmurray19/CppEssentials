#include <cstdio>
// C Standard argument
// For variadic functions
#include <cstdarg>
using namespace std;

/*
// Function pointers
// In C++, you may take the address of a function and assign it to a pointer.
void func() {
	puts("This is func().\n");
}

int main() {
	// funcion pointer
	void (*funcPointer)() = func;
	puts("This is main().\n");
	// C++ Syntax
	funcPointer();
	// C Syntax
	(*funcPointer)();

	return 0;
}
*/

// Practical example of Function Pointers

// Forward declarations of functions
const char* prompt();
int jump(const char*);

// 5 simple functions that print a string
void fa() { puts("this is fa()"); }
void fb() { puts("this is fb()"); }
void fc() { puts("this is fc()"); }
void fd() { puts("this is fd()"); }
void fe() { puts("this is fe()"); }

// Array of function pointers
// Points to each of the 5 simple functions
void (*funcs[])() = { fa, fb, fc, fd, fe };

int functionPointerMain() {
	// calls jump in a while loop until false is returned
	while (jump(prompt()));
	puts("\nDone.");
	return 0;
}

const char* prompt() {
	// This just gives the user a list of prompts
	puts("Choose an option:");
	puts("1. Function fa()");
	puts("2. Function fb()");
	puts("3. Function fc()");
	puts("4. Function fd()");
	puts("5. Function fe()");
	puts("Q. Quit.");
	printf(">> ");
	fflush(stdout);                 // flush after prompt

	const int buffsz = 16;          // constant for buffer size
	static char response[buffsz];   // static storage for response buffer
	fgets(response, buffsz, stdin); // get response from console

	return response;
}


// Takes c string as input
int jump(const char* rs) {
	// Gets first element of string array
	char code = rs[0];
	// if its q, we return false
	if (code == 'q' || code == 'Q') return 0;

	// get the length of the funcs array
	int func_length = sizeof(funcs) / sizeof(funcs[0]);

	int i = (int)code - '0';   // convert ASCII numeral to int
	// if the input is invalid
	// so its smaller than 1 or greater than the amount of choices
	if (i < 1 || i > func_length) {
		puts("invalid choice");
		return 1;
	}
	// otherwise it calls the function
	else {
		funcs[i - 1]();         // array is zero-based
		return 1;
	}

}


// Overloading functions


// These functions all share the same name
// But have different inputs
// C++ uses the entire function name, with parameters to define a function
// So this is not legal in C


// Cube
double volume(double a) {
	printf("Cube of %.3lf.\n", a);
	return a * a * a;
}

// Cuboids
double volume(double a, double b, double c) {
	printf("Cuboid of %.3lf x %.3lf x %.3lf.\n", a, b, c);
	return a * b * c;
}


// Cylinder
double volume(double r, double h) {
	const static double _pi = 3.141592653589793;
	printf("Cylinder of %.3lf x %.3lf.\n", r, h);
	return _pi * r * r * h;
}

int overloadingFunctions() {
	printf("Volume of a 2 x 2 x 2 cube: %.3lf.\n", volume(2.0));
	printf("Volume of a 2 x 5 x 9 cube: %.3lf.\n", volume(2.0, 5.0, 9.0));
	printf("Volume of a cylinder, radius 2, height 7: %.3lf.\n", volume(2.0, 7.0));
	return 0;
}


// Defining a variable number of arguments

// ... means that this function takes a variable number of arguments
// The first argument is defined always defined
double average(const int count, ...) {
	// defines the variable that will be used for the variadic arguments
	va_list ap;
	int i;
	double total = 0.0;

	// Takes the data type to be passed through the variadic argument, as well as the number of arguments to show up
	va_start(ap, count);
	for (i = 0; i < count; ++i) {
		total += va_arg(ap, double);
	}

	// va_end is always required if you use a va_start
	va_end(ap);
	return total / count;
}

// This works like printf
int message(const char* fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	int rc = vfprintf(stdout, fmt, ap);
	puts("");
	va_end(ap);
	return rc;
}

int variableArguments() {
	message("This is a message.\n");
	message("Average: %lf.\n", average(5, 25.0, 3.9, 50.1, 249.4, 65.0));
	return 0;
}