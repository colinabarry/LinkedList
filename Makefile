CC=clang

all: LinkedListTest

LinkedListTest: src/LinkedListTest.c
	$(CC) -o bin/LinkedListTest src/LinkedListTest.c

