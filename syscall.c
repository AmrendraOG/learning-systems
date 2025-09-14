#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]) {
	size_t length;
	int lenString;
	char buf[100];

	strncpy(buf, argv[1], 99);
	lenString = strlen(buf);

	length = write(1, buf, lenString);

	return 0;

}
