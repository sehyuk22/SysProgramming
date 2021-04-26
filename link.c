#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[ ])
{
	printf("hard link");
	if (link(argv[1], argv[2]) == 1) {
		exit(1);
	}	
	exit(0);
}
