// A vector is a sequence container that supports random access to its elements

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Vectors() {
	// Initialise Vector of Integer
	cout << "Vector from initializer list: " << endl;
	vector<int> intVector = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// Vectors can:
	/*
	Access current container size
	Access front and back elements
	Insert and Delete elements
	*/
	cout << "size: " << intVector.size() << endl;
	cout << "front: " << intVector.front() << endl;
	cout << "back: " << intVector.back() << endl;

	// Iterator
	cout << endl << "Iterator:" << endl;
	vector<int>::iterator itBegin = intVector.begin();
	vector<int>::iterator itEnd = intVector.end();
	for (auto it = itBegin; it < itEnd; ++it) {
		cout << *it << ' ';
	}
	cout << endl;


	// Index a vector
	cout << endl << "Index:" << endl;
	cout << "element at 5: " << intVector[5] << endl;
	cout << "element at 5: " << intVector.at(5) << endl;

	cout << endl << "Range-based for loop:" << endl;
	for (int& i : intVector) {
		cout << i << ' ';
	}
	cout << endl;

	// Insert elements at specific positions
	cout << endl << "Insert 42 at begin + 5: " << endl;
	intVector.insert(intVector.begin() + 5, 42);
	cout << "size: " << intVector.size() << endl;
	cout << "intVector[5]: " << intVector[5] << endl;

	// Erase elements at specific positions
	cout << "Erase at begin + 5: " << endl;
	intVector.erase(intVector.begin() + 5);
	cout << "size: " << intVector.size() << endl;
	cout << "intVector[5]: " << intVector[5] << endl;

	cout << "push_back 47: " << endl;
	intVector.push_back(47);
	cout << "size: " << intVector.size() << endl;
	cout << "intVector.back() " << intVector.back() << endl;

	cout << "Range-based for loop: " << endl;
	for (int& v : intVector) {
		cout << v << ' ';
	}
	cout << endl << endl;

	// From C-array
	const static size_t size = 10;
	int intArray[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << endl << "Vector from C-array: " << endl;
	vector<int> intVector2(intArray, intArray + size);
	for (int& i : intVector2) {
		cout << i << ' ';
	}
	cout << endl << endl;

	// Vector of strings
	cout << "Vector of strings:" << endl;
	vector<string> stringVector = { "one", "two", "three", "four", "five" };
	for (string& v : stringVector) {
		cout << v << endl;
	}

	return 0;
}
