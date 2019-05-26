// const-safe objects
#include <cstdio>
using namespace std;

class functionMembers {
	int i = 0;
public:
	// Best practice to have functions like so
	void setValue(int value);
	// Putting the const keyword makes it const safe
	int getValue() const;
	int getValue() ;
};

// Implement the functions like so
void functionMembers::setValue(int value) {
	i = value; 
}

// Needs to be here too
int functionMembers::getValue() const {
	puts("This function is const safe.\n");
	return i;
	//return ++i;
	// this line is now illegal
}

// Non-const functions are mutable
int functionMembers::getValue() {
	puts("This function is mutable.\n");
	return ++i;

}


int functionMembersMain() {
	int i = 9;
	functionMembers classObject;

	classObject.setValue(i);
	printf("Value has been set to %d.\n", classObject.getValue());

	// We see that getValue is 0 here
	functionMembers classObject2;
	printf("Value has been set to %d.\n", classObject2.getValue());
	
	// getValue doesn't have access to object, because it is not const safe
	const functionMembers classObject3;
	printf("Value has been set to %d.\n", classObject3.getValue());


	return 0;
}