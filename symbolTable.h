//Prototypes for symbol table

// Linked list
typedef struct node {
    char label[11];
    int lcVal;
    struct node *next;
} llist;

// Create symbolTable
void Create_symbolTable(int arglength, const char * fileargs[]);

// Print all the elements in our Linked list
void printLinkedList(llist* list, int i);

// Add to the our Linked list
void addtoLinkedlist(llist** list, char * listItem, int lcVal);
