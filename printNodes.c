/*
	BST Inorder Print Function
	Inorder: left, root, right
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "opcodeTable.h"


/*
	@node - pointer to the root of the BST
*/
void PrintInorder(struct treeNode *node)
{
    // Base case
    if(node==NULL)
    {
        return;
    }
    // Left
    PrintInorder(node->left);
    // Root
    printf("%s ",node->data);
    // Right
    PrintInorder(node->right);
}
