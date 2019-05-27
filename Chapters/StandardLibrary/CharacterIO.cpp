// Unformatted Character I/O
#include <cstdio>
#include <cstring>
using namespace std;

int unformattedCharacterIO() {
	// fputs does not send a new line at the end
	fputs("Hello, World!\n", stdout);

	const int bufSize = 256;
	static char buf[bufSize];
	fputs("Prompt: ", stdout);
	fflush(stdout);
	// Gets characters from console
	fgets(buf, bufSize, stdin);

	fputs(buf, stdout);

	return 0;
}


// Formatted character IO
int formattedCharacterIO() {
	int i = 5;
	long int longInt = 1234567890;
	const char* str = "This is a string.";
	printf("i is %d, longInt is %ld, str is %s, len is %zd.\n", i, longInt, str, strlen(str));
	printf("%% prints out percentage sign.");
	// Other symbols
	/*
	%d - Integer number
	%f - Floating point number
	%s - C string
	%c - Character
	%p - Pointer
	%% - Percentage sign
	*/
	return 0;
}