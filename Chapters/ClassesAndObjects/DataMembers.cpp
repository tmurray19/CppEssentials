// You can create a class with either the class or the struct keyword
// This also goes into accessors and mutators
#include <cstdio>
#include <string>
using namespace std;

// Structs default to public members
struct testStruct {
	int iA;
	int iB;
	int iC;
};


// Class defaults to private members
class testClass {
	int iD;
	int iE;
	int iF;
};

// The members in classes *should* be accessed and changed with accessors and mutators
// like so
class accessorsClass {
	// Initialise data members
	int intA = 0;
	string stringB = "";
	int intC = 0;
public:
	// Constructor
	accessorsClass(const int a, const string& b, const int intC) : intA(a), stringB(b), intC(3) {};
	// Mutators
	void seta(const int a) { intA = a; }
	void setb(const string& b) { stringB = b; }
	void setc(const int c) { intC = c; }
	// Accessors
	int geta() const { return intA; }
	const string& getb() const { return stringB; }
	const char* getb_cstr() const { return stringB.c_str(); }
	int getc() const { return intC; }
};


int dataMembers() {
	testStruct tS = { 1, 2, 3 };
	testClass tC = {};
	// This is legal, because a is a struct
	//a.iA = 4;
	// This is illegal, because b is a class
	//b.iA = 3;
	printf("iA is %d, iB is %d, iC is %d.\n", tS.iA, tS.iB, tS.iC);

	accessorsClass a(1, "two", 3);
	printf("intA is %d, stringB is %s, intC is %d.\n", a.geta(), a.getb_cstr(), a.getc());
	return 0;


	return 0;
}