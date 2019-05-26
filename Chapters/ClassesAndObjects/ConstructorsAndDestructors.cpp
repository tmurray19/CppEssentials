// constructors.cpp by Bill Weinman <http://bw.org/>
// updated 2018-08-17
#include <cstdio>
#include <string>
using namespace std;

const string unknown = "Unknown";
const string clone_prefix = "Clone-";

// -- interface --
class Animal {
    string _type = unknown;
    string _name = unknown;
    string _sound = unknown;
public:
    Animal();   // Default constructor
    Animal(const string & type, const string & name, const string & sound); // Constructor
    Animal(const Animal &); // Copy constructor
    ~Animal();  // Destructor
    void print() const; //toString() method
};

// -- implementation --
// Default constructor
Animal::Animal() {
    puts("Default constructor.");
}

// Constructor
Animal::Animal(const string & type, const string & name, const string & sound)
: _type(type), _name(name), _sound(sound) {
    puts("Constructor with arguments.");
}

// Copy constructor
Animal::Animal(const Animal & a) {
    puts("Copy constructor.");
    _name = clone_prefix + a._name;
    _type = clone_prefix + a._type;
    _sound = a._sound;
}

// Destrutor
Animal::~Animal() {
    printf("Destructor: %s the %s,\n", _name.c_str(), _type.c_str());
}

void Animal::print () const {
    printf("%s the %s says %s.\n\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

int ConstructorsAndDestructors() {
	// Calling default constructor
    Animal a;
    a.print();
    
	// Calling Constructor
    const Animal b("Goat", "Bob", "Baah");
    b.print();
    
	// Calling copy constructor
	const Animal c = b;
    c.print();
    
    puts("End of main.\n");
    return 0;
}
