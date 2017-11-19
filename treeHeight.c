/*
	Function to get the height of the Binary Search Tree
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "opcodeTable.h"

int BST_Height(struct treeNode *node)
{

    // If empty, return 0
    if((node == NULL) || (node->left == NULL && node->right == NULL))
    {
        return 0;
    }
    else
    {
        // Height of left subtree
        int lst = BST_Height(node->left);
        // Height of right subtree
        int rst = BST_Height(node -> right);
        
        // return whichever is max
        return 1 + max(lst, rst);
    }

}


