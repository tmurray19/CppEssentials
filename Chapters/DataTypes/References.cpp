#include <cstdio>
using namespace std;

// Working example of references

// This function actually changes the value of i defined in the main function to be higher (11 in this case)
int& f(const int& i) {
	int _i = i;
	return ++_i;
}

int& f_original(int& i) {
	return ++i;
}



// Exploring references
int references() {


	int i = 31;
	// Declare reference to variable i
	int& intReference = i;
	// 10 is assigned to the reference, which refers to i
	// You can think of intReference as an alias to i
	intReference = 10;
	printf("i is %d.\n", i);
	printf("intReference is %d.\n", intReference);


	printf("\n");

	// i changes to 11, as outlined in the f function
	printf("f() is %d.\n", f(i));
	printf("i is %d.\n", i);



	printf("\n");

	// because the f function returns a reference, we can also redefine the variable at this point
	// Here I've showcased that we can actually just change the value of i to be 42
	printf("f() is %d.\n", f(i) = 42);
	// This becomes illegal unless we change the f function (you can see the original function below f)
	printf("i is %d.\n", i);


	// USE REFERENCES ONLY WHERE YOU CAN USE THE CONST KEYWORD
	return 0;
}