#include "Node.hpp"
#include <iostream>

/*
 * Recursively solve the Tree.
 * All leaf values are numbers, and the below tree must be correct.
 */
int Node::solve() {
  if (this->isOperand) {
    switch (this->op) {
    case ('+'):
      return this->left->solve() + this->right->solve();
    case ('-'):
      return this->left->solve() - this->right->solve();
    case ('*'):
      return this->left->solve() * this->right->solve();
    case ('/'):
      return this->left->solve() / this->right->solve();
    default:
      break;
    }
  }
  return this->value;
}

int Node::getValue() {
  return this->value;
}

char Node::getOperator() {
  return this->op;
}

void Node::printTree() {
  if (this->isOperand) {
    std::cout << this->op << " ";
  } else {
    std::cout << this->value << " ";
  }
  if (this->left) {
    this->left->printTree();
  }
  if (this->right) {
    this->right->printTree();
  }
}

void Node::setLeft(Node*l) {
  this->left = l;
}
void Node::setRight(Node*r) {
  this->right = r;
}

bool Node::isOp(){
  return this->isOperand;
}

Node::Node(int num, char oper) {

  this->value = num;
  this->isOperand = true;
  if (oper == '0') this->isOperand = false;
  this->op = oper;
  this->left = NULL;
  this->right = NULL;
}
