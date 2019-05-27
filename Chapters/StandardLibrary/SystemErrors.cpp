// System errors
#include <cstdio>
#include <cstring>
#include <cerrno>

int main() {
	printf("errno is: %d\n", errno);
	printf("Erasing file foo.bar\n");
	remove("foo.bar");
	printf("errno is: %d\n", errno);
	perror("Cannot erase file");
	const char* errstr = strerror(errno);
	printf("The error string is: %s.\n", errstr);
	printf("Tried to erase a string and this happened: %s.\n", errstr);
	return 0;
}
