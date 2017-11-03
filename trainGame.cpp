#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

static void exitWithUsage(int type);

int main(int argc, char * argv[]) {

    // Check that the user has entered 4 arguments
    if (argc != 5) exitWithUsage(0);

    int amountNumbers = argc-1; // the amount of numbers we're using

    // extract our arguments
    std::vector<int> values;

    // If failed to scan for a number, exit and print program usage
    for(int i = 0; i < amountNumbers; i++){
      int a;
      if(! std::sscanf(argv[i + 1], "%d", &a)) exitWithUsage(1);
      values.push_back(a);
    }

    int operators[] = {'+', '-', '*', '/'};

    // N! permuations of input
    while (std::next_permutation(values.begin(), values.end())){
      // N - 1 operators to be generated
      // Method: have an N-1 sized array
      // There are 4 operators, so we map numbers 0-3 to an operator
      // Roll along incrementing % 4
      int numOps = amountNumbers - 1;
      int usedOps[numOps];
      std::fill(usedOps, usedOps + numOps, 0);
      for (int i =0; i < numOps; i++) {

      }
    }

    return 0;
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
	std::exit(1);
}
