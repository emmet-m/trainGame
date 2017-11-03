#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

#define NUM_OPERATIONS 4

char operators[] = {'+', '-', '*', '/'};

static void exitWithUsage(int type);
static void permutateOperations(int remainder, std::vector<char>  ops, std::vector<int> numbers);
static void solve(std::vector<int> numbers, std::vector<char> operations);

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

    // N! permuations of input
    while (std::next_permutation(values.begin(), values.end())){
      // Generate our N-1 operations
      std::vector<char> usedOps;
      // recursively solve
      permutateOperations(amountNumbers - 1, usedOps, values);
    }

    return 0;
}

// We have to interleave the operations and numbers!
// Any permutation where the first two elements are numbers is a valid permutation.
// So, we shuffle like that
static void solve(std::vector<int> numbers, std::vector<char> operations){
}

// N - 1 operators to be generated
// Method: have an N-1 sized array
// There are 4 operators, so we map numbers 0-3 to an operator
// Each layer of recursion does all 4 operations
static void permutateOperations(int remainder, std::vector<char> ops, std::vector<int> numbers){
  if (remainder == 0) {
    // Now we can evaluate, we have n-1 operations
    solve(ops, numbers);
  } else {
    // keep going
    for (int currOp = 0; currOp < NUM_OPERATIONS; currOp++) {
      ops.push_back(operators[currOp]);
      permutateOperations(remainder - 1, ops, numbers);
      ops.pop_back();
    }
  }
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
