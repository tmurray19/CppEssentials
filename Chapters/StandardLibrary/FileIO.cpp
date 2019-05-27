// File IO

#include <cstdio>
using namespace std;

constexpr int maxString = 1024;
constexpr int repeat = 5;

int fileIO(int argc, char** argv) {
	// file name
	const char* fileName = "testfile.txt";
	const char* str = "This is a literal c string.\n";

	printf("Writing to file...\n");
	// Takes the file name, and how to interact with it
	// w for write, r for read, a for append
	FILE* fileWrite = fopen(fileName, "w");
	for (int i = 0; i < repeat; i++) {
		fputs(str, fileWrite);
	}

	fclose(fileWrite);
	printf("Done.\n");

	printf("Reading the file...\n");
	char buf[maxString];
	FILE* fileRead = fopen(fileName, "r");
	while (fgets(buf, maxString, fileRead)) {
		fputs(buf, stdout);
	}

	fclose(fileRead);
	remove(fileName);

	printf("Done.\n");
	return 0;
}