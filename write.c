#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <malloc.h>

int main() {
	int sz;
	char buf[100];
	strcpy(buf, "Written to the file!!! \n");
	int fd = open("xyz", O_WRONLY | O_APPEND);
	if (fd < 0) {
	perror("There was an error while opening the file");
	exit(1);
	}

	sz = write(fd, buf, strlen(buf));

	printf("The number of bytes written to the file: %d\n", sz);
	return 0;
}

