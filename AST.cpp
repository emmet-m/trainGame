#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include "Node.hpp"
#include "AST.hpp"


int AST::value() {
  return this->head->solve();
}

void AST::print() {
  this->head->printTree();
  std::cout << std::endl;
  std::cout << "Done!" << std::endl;
}

AST::AST(std::string format){
  // strategy: iterate over a vector of Nodes. When you see an operation,
  // Use the previous two nodes as it's children and remove them from the vector
  std::vector<Node*> nstring = std::vector<Node*>();

  int operatorCount = 0;

  for (unsigned int i =0; i < format.size(); i++) {
    char s = format.at(i);
    // Number
    if (s >= '0' && s <= '9' ) {
      nstring.push_back(new Node(s - '0'));
    // Operation
    } else {
      operatorCount++;
      nstring.push_back(new Node(0, s));
    }
  }

  // Keeps track of the last operator we found
  auto currLast = nstring.begin();
  // perform the same amount of times as we have operators
  for (int i = 0; i < operatorCount; i++ ) {
    // Start at our previous operator or the beginning
    for (auto it = currLast; it != nstring.end(); ++it) {
      // Our current node
      Node * n = *it;
      if (!(n->isOp())) {
        continue;
      }

      // Get the previous and the previous previous
      Node * prev = *(std::prev(it));
      Node * prevprev = *(std::prev(std::prev(it)));

      // Set the right of the curr node and remove
      n->setRight(prev);
      nstring.erase(std::remove(nstring.begin(), nstring.end(), prev), nstring.end());
      // Set the left of the curr node and remove
      n->setLeft(prevprev);
      nstring.erase(std::remove(nstring.begin(), nstring.end(), prevprev), nstring.end());

      // Update the curr last as the successor of the current operator
      currLast = std::find(nstring.begin(),nstring.end(), n) + 1;
      break;
    }
  }

  this->head = nstring.front();
}
