#ifndef AST_HPP
#define AST_HPP

#include <string>
#include <vector>
#include <string>
#include "Node.hpp"


/*
 * An Abstract Syntax tree dummy class.
 * Using a tree is of course inefficient for this project, but it's a nice
 * educational excersize!
 */
class AST {
private:
  Node * head;
public:
  // Evaluates, but does not collapse, the tree
	int value();
  // Prints the tree in NLR order
  void print();
  // Contructor that takes an RPN string, and builds an AST if it's valid
	AST(std::string format);
	~AST();
};

#endif
