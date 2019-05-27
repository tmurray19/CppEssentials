// File IO

#include <cstdio>
#include <cstring>
#include <cstdint>
using namespace std;

constexpr int maxLen = 111;

struct S {
	uint8_t num;
	uint8_t len;
	char str[maxLen + 1];
};

int BinaryFiles(int argc, char** argv) {
	// file name
	const char* fileName = "testfile.file";
	const char* cStr = "This is a literal c string.\n";

	printf("Writing to file...\n");
	// Takes the file name, and how to interact with it
	// w for write, r for read, a for append
	// always use b files when working with non text files
	FILE* fileWrite = fopen(fileName, "wb");
	static struct S buf1;
	for (int i = 0; i < 5; i++) {
		buf1.num = i;
		buf1.len = (uint8_t)strlen(cStr);
		if (buf1.len > maxLen) buf1.len = maxLen;
		strncpy(buf1.str, cStr, maxLen);
		buf1.str[buf1.len] = 0; // make sure it's terminated
		fwrite(&buf1, sizeof(struct S), 1, fileWrite);
	}

	fclose(fileWrite);
	printf("Done.\n");

	printf("Reading the file...\n");
	FILE* fileRead = fopen(fileName, "r");
	struct S buf2;
	size_t rc;
	while ((rc = fread(&buf2, sizeof(struct S), 1, fileRead))) {
		printf("a: %d, b: %d, s: %s\n", buf2.num, buf2.len, buf2.str);
	}


	fclose(fileRead);
	remove(fileName);

	printf("Done.\n");
	return 0;
}