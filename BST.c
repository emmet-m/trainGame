#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "BST.h"

// The definition of a tree node
typedef struct Node {
    // A type of struct.
    // 'o' for operand
    // 'n' for number
    char type;

    // A number for use in the game
    int data;

    // A character defining the operand on the node.
    // Either *, /, + or -.
    char op;

    // Connections to other nodes
    Link right;
    Link left;	

} Node;


Link createNode(char type, int data, char op) {
    // Malloc a new node. If it's null, return NULL.
    Link new = malloc(sizeof(Node));
    assert(new != NULL);

    // Set the node's new values
    new->type = type;
    new->data = data;
    new->op = op;

    new->left = NULL;
    new->right = NULL;

    // Give it back to the user
    return new;
}
