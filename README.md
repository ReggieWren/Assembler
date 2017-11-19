# Assembler
This program will generate a machine opcode table, stored in a binary search
tree, and a symbol table, stored in a hash table. The executable version of the program will be
named firstpass. The makefile must ensure this. The firstpass program must support the
following command line statement:
firstpass instructionset programfile hashtablesize

• instructionset is the name of a text file containing a list of instructions. You can assume
that each line of the file has the form: instruction opcode format, where instruction
is a string, opcode is a decimal integer, and format is a decimal integer in the range 1 ≥
format ≤ 3. The string is a mnemonic for an SIC/XE instruction (e.g. MULR) and the
opcode integer is that instruction’s opcode. The format represents the instruction size: 1,
2, or 3 byte (we will exclude 4–byte instructions in this assignment). The maximum length
of a mnemonic string is 5 characters, and therefore can be stored in a 6–byte buffer. The
opcode can be stored in 1 byte. You can choose to use an integer or an unsigned char to store
it. Your program should insert 1 node into the binary search tree for each instruction in the
file. Then, your program should print the contents of the tree to stdout. This should be a
level–order representation, with each line representing one level of the tree.

• programfile is a file containing the source code for an SIC/XE program. You can assume
each line has 1 instruction of the form: [label] instruction [arguments...] or label
2

•

directive argument. In the first case, the line contains a standard instruction. In the
second case, the line contains a memory allocation directive. Square brackets indicate that
the item is optional. Multiple arguments are indicated by dots. For each symbol encountered
in the label field, your program should insert 1 node into its hash table. The node should
contain the symbol, and its LC value.
Your program should construct the opcode table by inserting the instructions into the BST in the
order they appear in the opcode file. Similarly, it should construct the symbol table by inserting
the symbols into the hash table in the order they appear in a label field in the program file. Your
program should not do any tree rebalancing, and your hash table should be the size specified on
the command line.
Your program should print to stdout, the following:
• An in-order traversal of the BST. For each node, output the instruction name. For
instance, given the opcode file in the example, your program would output: addr, float,
j, lda, ldb, mul, sta
• The height of the BST. The height of a BST is the maximum length of a path from the root
to the deepest node. The length of a path is the number of links. It is defined recursively as
follows: The height of a tree with 0 or 1 node is 0. Otherwise, the height is the height of the
taller of its two subtrees, plus 1.
• The contents of the hash table, with one array element per line. Each array element is a list
of nodes at that index. Each node should display the symbol and LC value. Each line should
be of the form: index: listNode1 → listNode2 → · · · → listNodeN → NULL.
