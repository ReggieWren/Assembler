/*
	Max function used to determine the max height of a BST in this case. Returns the max length
*/
#include <stdio.h>
#include "opcodeTable.h"


/*
	@len1 - 1st length to be compared
	@len2 - 2nd length to be compared
*/
int max(int len1, int len2)
{
    if(len1 < len2)
    {
        return len2;
    }
    else if(len1 > len2)
    {
        return len1;
    }
    else
    {
        return len1;
    }
}
