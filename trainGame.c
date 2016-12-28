#include <stdlib.h>
#include <stdio.h>


static void exitWithUsage(int type);

int main(int argc, char * argv[]) {

    // Check that the user has entered 4 arguments
    if (argc != 5) exitWithUsage(0);

    // extract our 4 arguments
    int a, b, c, d;

    // If failed to scan for a number, exit and print program usage
    if(! sscanf(argv[1], "%d", &a)) exitWithUsage(1);
    if(! sscanf(argv[2], "%d", &b)) exitWithUsage(1);
    if(! sscanf(argv[3], "%d", &c)) exitWithUsage(1);
    if(! sscanf(argv[4], "%d", &d)) exitWithUsage(1);

    // Display the user input
    printf("Numbers: %d %d %d %d\n", a, b, c, d);

    return EXIT_SUCCESS;
}

static void exitWithUsage(int type) {
    // Print general usage
    printf("Usage: (0-9) (0-9) (0-9) (0-9)\n");
    // Display error message for type of wrong input
    switch (type) {
        case(0):
            printf("Error: program requires exactly 4 integer arguments\n");
            break;
        case(1):
            printf("Error: Arguments must be integer numbers\n");
            break;
    }    
    // Exit the program
    exit(0);
}
