// BST: an ADT for creating and using binary search trees

// Connections between nodes on tree's are links
typedef struct Node * Link;

// Tree is just a pointer to a node!
typedef Node * Tree;


// A function for creating a node. All items are set,
// but data or op will be ignored by other functions depending on type.
Link createNode(char type, int data, char op);
