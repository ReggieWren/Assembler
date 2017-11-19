/*
	Function to insert into the linked list
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "symbolTable.h"

/* 
	@llist - pointer to the pointer to the head of the linked list (passed in as address)
	@listItem - item value to be inserted into the list
	@lcVal - value of the lc for the specified value inserted
*/
void addtoLinkedlist(llist** list, char * listItem, int lcVal)
{
    
    // Allocate memory
    llist* newItem = malloc(sizeof(llist));
    
    // Put data in the list
    // newItem->label = listItem; - puts the same string every time
    strcpy(newItem->label, listItem);
    newItem->lcVal = lcVal;
    
    // Next is pointer to the start of the list
    newItem->next = *list;
    
    // Start of the list points to the new item
    *list = newItem;

    
}


