// Creating, removing and renaming files
#include <cstdio>
using namespace std;

int fileManagement() {
	static const char* fileName = "file1";
	static const char* fileName2 = "file2";


	//rename(fileName, fileName2);
	remove(fileName2);
	//FILE* fileHandle = fopen(fileName, "w");
	//fclose(fileHandle);

	puts("Done.\n");

	return 0;
}