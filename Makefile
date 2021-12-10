CC=clang

all: LinkedListTest

LinkedListTest: src\LinkedListTest.c
	$(CC) -o LinkedListTest src\LinkedListTest.c