
#include <iostream>
#include <exception>
using namespace std;

class E : public exception {
	const char* msg;
	E();
public:
	E(const char* s) throw() : msg(s) {}
	const char* what() const throw() { return msg; }
};

const E e_ouch("Ouch!");
const E e_bad("Bad code!");
const E e_worse("Don't do that!");


void broken() {
	cout << "this is a broken function" << endl;
	//throw exception();
	//throw E("Ouch!");
	throw e_bad;
}

int main() {
	cout << "let's have an emergency!" << endl;
	try {
		broken();
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}
	return 0;
}
