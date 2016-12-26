#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
	// extract our 4 arguments
	int a, b, c, d;
	if(! sscanf(argv[1], "%d", &a)) exit(0);
	if(! sscanf(argv[2], "%d", &b)) exit(0);
	if(! sscanf(argv[3], "%d", &c)) exit(0);
	if(! sscanf(argv[4], "%d", &d)) exit(0);
	printf("%d %d %d %d\n", a, b, c, d);
	return EXIT_SUCCESS;
}

static void exitWithUsage(void) {
	printf("Usage: (0-9) (0-9) (0-9) (0-9)\n");
	exit(0);
}
