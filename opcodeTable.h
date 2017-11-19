/*
	Prototypes for creating the opcode table
*/

// Create opcode Table
void Create_opcodeTable(int arglength, const char * fileargs[]);

// Binary Search Tree Structure
typedef struct treeNode
{
    char *data;
    struct treeNode *left;
    struct treeNode *right;
    
}treeNode;

// Insert into BST
struct treeNode * Insert(struct treeNode *node,char * data);

// Print nodes (InOrder)
void PrintInorder(struct treeNode *node);

// Print the height of our Binary Search Tree
int BST_Height(struct treeNode *node);

// Function to calculate maximum between two heights
int max(int len1, int len2);
