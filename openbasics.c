#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
	int fd;
	fd = open("demo.c", O_RDONLY);
	if (fd == -1) {
	printf("Error while opening file");	
	}
	else {
	printf("FD was able to open the file");	
}
	return 0;
}
