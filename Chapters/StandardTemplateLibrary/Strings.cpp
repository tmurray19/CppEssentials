// STL Strings

#include <iostream>
#include <string>
using namespace std;

int Strings() {
	string str = "This is a string";
	string::iterator it;

	// size & length
	cout << "size is same as length: " << str.size() << endl;
	cout << "size is same as length: " << str.length() << endl;

	// + for concatenation
	cout << "concatenated strings: ";
	string str2 = "this is also a string";
	cout << str + ":" + str2 << endl;

	// compare
	cout << "is str == str2? " << (str == str2 ? "yes" : "no") << endl;
	cout << "copy-assign str2 = str" << endl;
	str2 = str;
	cout << "is str == str2? " << (str == str2 ? "yes" : "no") << endl;
	cout << "is str > \"other string\"? " << (str > "other string" ? "yes" : "no") << endl;
	cout << "is str < \"other string\"? " << (str < "other string" ? "yes" : "no") << endl;
	cout << "is \"other string\"? > str  " << ("other string" > str ? "yes" : "no") << endl;
	cout << "is \"other string\" < str? " << ("other string" < str ? "yes" : "no") << endl;

	// iteration
	cout << "each character: ";
	for (char c : str) {
		cout << c << " ";
	}
	cout << endl;

	// insert & erase with an iterator
	it = str.begin() + 5;
	str.insert(it, 'X');
	cout << "after insert: " << str << endl;

	it = str.begin() + 5;
	str.erase(it);
	cout << "after erase: " << str << endl;

	// replace
	str.replace(5, 2, "ain't");
	cout << "after replace: " << str << endl;

	// substr
	cout << "substr: " << str.substr(5, 5) << endl;

	// find
	size_t pos = str.find("s");
	cout << "find first \"s\" in str (pos): " << pos << endl;

	// rfind
	pos = str.rfind("s");
	cout << "find last \"s\" in str (pos): " << pos << endl;

	return 0;
}
