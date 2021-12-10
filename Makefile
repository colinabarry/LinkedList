CC=clang

all: LinkedListTest

LinkedListTest: LinkedListTest.c
	$(CC) -o LinkedListTest LinkedListTest.c