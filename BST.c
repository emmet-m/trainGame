#include <stdio.h>
#include <stdlib.h>
#include "BST.h"

Link createNode(char type, int data, char op) {
    // Malloc a new node. If it's null, return NULL.
    Link new = malloc(sizeof(Node));
    if (new == NULL) return NULL;

    // Set the node's new values
    new->type = type;
    new->data = data;
    new->op = op;

    new->left = NULL;
    new->right = NULL;

    // Give it back to the user
    return new;
}
