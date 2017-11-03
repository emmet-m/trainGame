#include "AST.hpp"
#include <iostream>
int main () {
  // Testing 4 permutations of RPN string...
  // Type 1:
  AST * t1 = new AST("3465-++"); // The solution to this is of course 8
  std::cout << t1->value() << std::endl;

  // Type 2:
  AST * t2 = new AST("34-65++");
  std::cout << t2->value() << std::endl;

  // Type 3:
  AST * t3 = new AST("346-5++");
  std::cout << t3->value() << std::endl;

  // Type 4:
  AST * t4 = new AST("34-6+5+");
  std::cout << t4->value() << std::endl;

  return 0;
}
