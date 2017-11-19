/*
	function to create the symbol table
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "symbolTable.h"
#include "hashFunction.h"


void Create_symbolTable(int arglength, const char * fileargs[])
{

    
    int hashSize = atoi(fileargs[3]);
    
    // Initialize our item 
    llist *item[hashSize];
    
    //Set each item to null
    int j;
    for(j = 0; j < hashSize; j++)
    {
        item[j] = NULL;
    }
	
	//structure to hold prog set
    struct prog_set {
        char    inst_dir[6];
        char    symbol[11];
        char    reg_arg[6];
    };
    
    // Text file pointer
    FILE *fileptr;
    
    /* Open the text file. */
    if ((fileptr = fopen(fileargs[2], "r")) == NULL) {
        fprintf(stderr, "Could not open file: %s\n", fileargs[2]);
        exit(1);
    }
    
    char symbol[100];
    char temp1[11];
    int index = 0;
    int LC = 0;
    int spaceCount = 0;
    
    // Get the first character
    char ch = getc ( fileptr );
    if(ch == ' ')
    {
        spaceCount++;
    }

    // Read until End of file
    while ( ch != EOF ) {
        if(ch == ' ')
        {
            spaceCount++;
        }
        
        // If the character is not '\n', add to the char array
        if ( ch != '\n'){
            // add to char array
            symbol[index++] = ch;

        }
        else
        {
            // Null terminating character
            symbol[index] = '\0';
            // resetting to fill the array from beginning
            index = 0;
            
            if(symbol[0] != '\t')
            {
                // get the symbol
                sscanf(symbol,"%s",temp1);
                int hashVal = 0;
                // get the hash value
                hashVal = hashFunction(temp1, hashSize);
                addtoLinkedlist(&item[hashVal], temp1, LC);
                
            }
            
            // increase the LC value -- looking for first char
            // and whitespaces
            if(spaceCount == 0)
                LC +=1;
            if(spaceCount == 1 && symbol[0] == '\t')
                LC +=3;
            if(spaceCount == 1 && symbol[0] != '\t')
                LC +=1;
            if(spaceCount == 2 && symbol[0] == '\t')
                LC +=2;
            if(spaceCount == 2 && symbol[0] != '\t')
                LC +=3;
            if(spaceCount == 3 && symbol[0] != '\t')
                LC +=2;

            // reset to 0
            spaceCount = 0;
            
        }
        // Read the next character
        ch = getc ( fileptr );
    }

        // Print the elements of our Linked list
        printf("Hash table: \n");
        int i = 0;
        while (i != hashSize)
        {
            // Print al the contents of our Hash table
            printLinkedList(item[i], i);
            i++;
        }
    
    /* Close the text file */
    fclose(fileptr);

}





