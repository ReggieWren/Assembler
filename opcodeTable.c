/*
	Function to create the opcode Table
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "opcodeTable.h"

/* 
	@arglength - length of the arguments passed from command line
	@fileargs - arguments passed in from command line
	
*/
void Create_opcodeTable(int arglength, const char * fileargs[])
{
    //Struct
    struct inst_set {
        char    instruction[6];
        int     opcode;
        int     format;
    };
    typedef struct inst_set InstructionSet;
    InstructionSet set;
    
    // Text file pointer
    FILE *fileptr;
    
    /* Open the text file. */
    if ((fileptr = fopen(fileargs[1], "r")) == NULL) {
        fprintf(stderr, "Could not open file: %s\n", fileargs[1]);
        exit(1);
    }
    
    struct treeNode *root = NULL;
    /* Read every instruction from the text file */
    while ((fscanf(fileptr, "%s %d %d", set.instruction, &set.opcode, &set.format)) != EOF)
    {
        root = Insert(root, set.instruction);
        //printf("%s %d %d\n", set.instruction, set.opcode, set.format);
    }
    
    // Print out the nodes in InOrder traversal
    PrintInorder(root);
    // Print out the height of Binary Search Tree
    printf("\n\nHeight of Binary Search Tree: %d\n\n", BST_Height(root));
    
    /* Close the text file */
    fclose(fileptr);
}
