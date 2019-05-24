#include <cstdio>
using namespace std;

// Showcasingh structured data


// Struct type allows you to aggregate a fixed set of data members into a single object
// You can also include function members
struct Employee {
	int id;
	const char* name;
	const char* role;
};



int structs() {
	// Initialise an employee like so
	Employee taidgh = { 45355941, "Taidgh Murray", "CTO" };

	// Can declare a pointer to a structure
	Employee* e = &taidgh;

	// Print out all the data members of the structure instance, taidgh
	printf("%s is the %s and has ID of %d.\n", taidgh.name, taidgh.role, taidgh.id);

	// Same result as above
	printf("%s is the %s and has ID of %d.\n", e->name, e->role, e->id);

	return 0;
}

//
//
// Bit fields
//
//
//


struct preferences {
	// Define defaults
	// Bools are bit fields
	// They only need one bit, 0 to indicate false, 1 to indicate true
	bool likesMusic : 1;
	bool hasHair : 1;
	bool hasInternet : 1;
	bool hasDinosaur : 1;
	// Unsigned because you can't really have negative children
	unsigned int numberOfChildren : 4;
};

int bitFields () {
	struct preferences homer;
	homer.likesMusic = true;
	homer.hasHair = false;
	homer.hasInternet = true;
	homer.hasDinosaur = false;
	homer.numberOfChildren = 3;

	printf("Size of int: %ld bits.\n", sizeof(int) * 8);
	printf("Size of homer: %ld bits.\n", sizeof(homer) * 8);

	if (homer.likesMusic) printf("Homer likes music.\n");
	if (homer.hasHair) printf("Homer likes music.\n");
	if (homer.hasInternet) printf("Homer likes music.\n");
	if (homer.hasDinosaur) printf("Homer likes music.\n");
	printf("Homer has %d children.\n", homer.numberOfChildren);

	return 0;
}