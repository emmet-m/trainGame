#ifndef NODE_HPP
#define NODE_HPP

#include <string>
#include <vector>

class Node {
private:
  bool isOperand;
  char op;
  int value;
  Node * left;
  Node * right;
public:
  // Returns true if the node is an operator
  bool isOp();
  // Recursively solves the tree
	int solve();
  // Returns the operator for this node, valid only if the node is an operator
  char getOperator();
  // Recursively prints in NLR order
  void printTree();
  // Sets the left child of this node
  void setLeft(Node*l);
  // Sets the right child of this node
  void setRight(Node*r);
  // Returns the integer value of this node, valid only if the node is an operator
  int getValue();
  // The node constructor takes a number value if it is a number node
  // (and NO operator), or an operator (+ * / -). If the operator is provided, the
  // node is assumed to be an operator.
  Node(int num, char oper='0');
};

#endif
