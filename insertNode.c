/*
	Function to insert into the binary search tree
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "opcodeTable.h"

/*
	@node - pointer the the node to be inserted
	@data - data to be inserted into the BST
*/
treeNode * Insert(treeNode *node,char * data)
{
    // Length of the instruction string
    long dataLen = strlen(data);
    // index
    int i = 1;
    
    // Fill the root
    if(node==NULL)
    {
        treeNode *temp;
        // Allocate memory
        temp = malloc(sizeof(treeNode));
        temp -> data = strdup(data);
        temp -> left = NULL;
        temp -> right = NULL;
        return temp;
    }
    // Fill the right node if > node
    if(data[0] > (node->data[0]))
    {
        node->right = Insert(node->right,data);
    }
    // Fill the left node if < node
    else if(data[0] < (node->data[0]))
    {
        node->left = Insert(node->left,data);
    }
    // If they are equal -- For example in "lda" & "ldb", char 'l'
    // is equal so we need to traverse through the whole string
    // and find a smaller or bigger character: a < b
    
    else if (data[0] == (node->data[0]))
    {
        // If the characters are equal, go to the next char
        while (i != dataLen)
        {
            // Fill the right node if > node
            if(data[i] > (node->data[i]))
            {
                node->right = Insert(node->right,data);
            }
            // Fill the left node if < node
            if(data[i] < (node->data[i]))
            {
                node->left = Insert(node->left,data);
            }
            // Go to the next character
            i++;
        }
        
    }
    // Node already exists!
    return node;
    
}
