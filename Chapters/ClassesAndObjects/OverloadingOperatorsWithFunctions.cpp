#include <cstdio>
#include <iostream>
using namespace std;

// Rational Number class
// Showcasing overloading operators
class Rational {
	int _n = 0;
	int _d = 1;
public:
	// This constructor is overloaded
	// It has default values defined in the arguments
	Rational(int numerator = 0, int denominator = 1) : _n(numerator), _d(denominator) {}; // Constructor
	Rational(const Rational& rhs) : _n(rhs._n), _d(rhs._d) {};    // Copy constructor
	~Rational(); // Destructor
	inline int numerator() const { return _n; }; // Numerator
	inline int denominator() const { return _d; }; // Denomiator
	Rational& operator = (const Rational&); // Arithmetic operators - These are overloading the default operation that these symbols perform
	// Rational operator + (const Rational&) const; // These are all const safe, as they do not need to change the private variables
	Rational operator - (const Rational&) const;
	Rational operator * (const Rational&) const;
	Rational operator / (const Rational&) const;
};

Rational::~Rational() {
	printf("Destructor: %d/%d.\n", _n, _d);
	_n = 0; _d = 1;
}

Rational& Rational::operator = (const Rational& rhs) {
	if (this != &rhs) {
		_n = rhs.numerator();
		_d = rhs.denominator();
	}
	return *this;
}


Rational Rational::operator - (const Rational& rhs) const {
	return Rational((_n * rhs._d) - (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator * (const Rational& rhs) const {
	return Rational(_n * rhs._n, _d * rhs._d);
}

Rational Rational::operator / (const Rational& rhs) const {
	return Rational(_n * rhs._d, _d * rhs._n);
}


// We have now moved the plus operator out of the class
// Now it takes two Rational class instances as inputs
// And uses the accessors to referece the values in the Rational classes 
Rational operator + (const Rational& lhs, const Rational& rhs) {
	return Rational((lhs.numerator() * rhs.denominator()) + (lhs.denominator() * rhs.numerator()), lhs.denominator() * rhs.denominator());
}


// useful for std::cout
// This is a non-member operator overload
std::ostream& operator << (std::ostream& o, const Rational& r) {
	if (r.denominator() == 1) return o << r.numerator();
	else return o << r.numerator() << '/' << r.denominator();
}

int main() {

	Rational a = 7;        // 7/1
	cout << "a is: " << a << endl;
	Rational b(5, 3);    // 5/3
	cout << "b is: " << b << endl;
	Rational c = b;        // copy constructor
	cout << "c is: " << c << endl;
	Rational d;            // default constructor
	cout << "d is: " << d << endl;
	d = c;                // assignment operator
	cout << "d is: " << d << endl;

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;

	// This line is fine
	cout << a << " + " << 14 << " = " << a + 14 << endl;
	// This line is illegal unless we move the overloaded operator out of the class
	cout << 14 << " + " << a << " = " << 14 + a << endl;

	return 0;
}
