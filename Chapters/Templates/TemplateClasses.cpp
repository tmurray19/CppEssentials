//Template classes
#include <iostream>
#include <string>
#include <exception>
using namespace std;

class E :
public std::exception {
	const char* msg;
	E() {};
public:
	explicit E(const char* s) throw() : msg(s) {}
	const char* what() const throw() { return msg; }
};



// Fixed size LIFO stack 
template <typename T>
class tmstack {
private:
	// Default an max sizes
	static const int defaultSize = 10;
	static const int maxSize = 1000;
	int _size;
	int _top;
	T* _stackPointer;
public:
	// Defining functions
	// Constructor and destructor
	// OverLoaded constructor with default size if none given
	explicit tmstack(int s = defaultSize);
	~tmstack() { delete[] _stackPointer; }
	// Push and pop
	T& push(const T&);
	T& pop();
	// See if stack is empty/full
	bool isEmpty() const { return _top < 0;  }
	bool isFull() const { return _top >= _size - 1; }
	// Get item at top of stack
	int top() const { return _top; }
	// Get size
	int size() const { return _size; }
};

// Constructor
template<typename T>
tmstack<T>::tmstack(int s) {
	// Throw exception if size is invalid
	if (s > maxSize || s < 1) 
		throw E("Invalid stack size.");
	else 
		_size = s;
		_stackPointer = new T[_size];
		// When we add an item to the stack, we need to start at index 0
		// So we initialise the top as -1
		_top = -1;
}


// Push and Pop functions
template<typename T>
T& tmstack<T>::push(const T& index) {
	if (isFull())
		throw E("Error: Stack full.");
	return _stackPointer[++_top] = index;
}


template<typename T>
T& tmstack<T>::pop() {
	if (isEmpty())
		throw E("Error: Stack is empty");
	return _stackPointer[_top--];
}

int main(int argc, char** argv) {
	try {
		tmstack<int> intStack(5);

		cout << "Int Stack size: " << intStack.size() << endl;
		cout << "Int Stack top: " << intStack.top() << endl;

		for (int i : {1, 2, 3, 4, 5}) {
			intStack.push(i);
		}

		cout << "Int Stack after pushes: " << intStack.top() << endl;
		cout << "Int Stack is :" << (intStack.isFull() ? " " : "not ") << "full." << endl;

		while (!intStack.isEmpty()) {
			cout << "Popped " << intStack.pop() << endl;
		}
	}
	catch (E& e) {
		cout << "Stack Error: " << e.what() << endl;
	}
	try {
		tmstack<string> stringStack(5);

		cout << "Int Stack size: " << stringStack.size() << endl;
		cout << "Int Stack top: " << stringStack.top() << endl;

		for (string i : {"One", "Two", "Three", "Four", "Five"}) {
			stringStack.push(i);
		}

		cout << "Int Stack after pushes: " << stringStack.top() << endl;
		cout << "Int Stack is :" << (stringStack.isFull() ? " " : "not ") << "full." << endl;

		while (!stringStack.isEmpty()) {
			cout << "Popped " << stringStack.pop() << endl;
		}
	}
	catch (E& e) {
		cout << "Stack Error: " << e.what() << endl;
	}

}