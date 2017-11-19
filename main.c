/*
	Reggie Wren
	Jasmine Mcpherson 
	Anvesh Mateti
	
	Program 4 Assembler CSI 402
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "opcodeTable.h"
#include "symbolTable.h"

int main(int argc, const char * argv[])
{
    
    Create_opcodeTable(argc, argv);
    Create_symbolTable(argc, argv);
    
    return 0;
}




