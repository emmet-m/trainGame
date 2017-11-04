#include "AST.hpp"
#include <iostream>
int main () {
  // Testing some permutations of RPN string...
  AST * t1 = new AST("3465-++"); // The solution to this is of course 8
  std::cout << t1->value() << std::endl;

  AST * t2 = new AST("34-65++"); // 10
  std::cout << t2->value() << std::endl;

  AST * t3 = new AST("346-5++"); // 6
  std::cout << t3->value() << std::endl;

  AST * t4 = new AST("3124*--"); // 10
  std::cout << t4->value() << std::endl;


  return 0;
}
