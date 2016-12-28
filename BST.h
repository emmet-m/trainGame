// BST: an ADT for creating and using binary search trees

// Connections between nodes on tree's are links
typedef struct Node * Link;

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

Link createNode(char type, int data, char op);
