firstpass: main.o hashFunction.o insertNode.o printNodes.o treeHeight.o maxHeight.o opcodeTable.o insertListitem.o symbolTable.o printLinkedlist.o
	gcc main.o hashFunction.o insertNode.o printNodes.o treeHeight.o maxHeight.o opcodeTable.o insertListitem.o symbolTable.o printLinkedlist.o -o firstpass
main.o:	main.c
	gcc -c main.c
hashFunction.o: hashFunction.c
	gcc -c hashFunction.c
insertNode.o: insertNode.c
	gcc -c insertNode.c
printNodes.o: printNodes.c
	gcc -c printNodes.c
treeHeight.o: treeHeight.c
	gcc -c treeHeight.c
maxHeight.o: maxHeight.c
	gcc -c maxHeight.c
opcodeTable.o: opcodeTable.c
	gcc -c opcodeTable.c
insertListitem.o: insertListitem.c
	gcc -c insertListitem.c
symbolTable.o: symbolTable.c
	gcc -c symbolTable.c
printLinkedlist.o: printLinkedlist.c
	gcc -c printLinkedlist.c
