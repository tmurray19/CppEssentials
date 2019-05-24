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