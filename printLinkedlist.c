/*
	Function to print the linked list to the console
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "symbolTable.h"

/*
	@head - pointer to the head of the list to be printed
	@i - hash table line number
*/
void printLinkedList(llist* head, int i)
{
    // Current element equals the incoming
    llist *current = head;
    
    printf("%d: ", i);
    // While current is not equal to null, print the list elements
    while(current != NULL)
    {
        // Print the elements in our list
        printf("(%s / ", current->label);
        printf("%d) -> ", current->lcVal);
        // Move to the next
        current = current->next;
    }
    printf("NULL\n");
    
}
