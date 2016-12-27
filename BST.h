// BST: an ADT for creating and using binary search trees

typedef Node * Link;
typedef struct Node {
	// A number for use in the game
	int data;
	
	// A type of struct.
	// 'o' for operand
	// 'n' for number
	char type;

	// A character defining the operand on the node.
	// Either *, /, + or -.
	char op;

	// Connections to other nodes
	Link right;
	Link left;	
} Node;
