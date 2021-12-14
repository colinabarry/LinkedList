CC=clang

all: LinkedListTest linked_list

LinkedListTest: src/LinkedListTest.c
	$(CC) -o bin/LinkedListTest src/LinkedListTest.c

linked_list: src/linked_list.c
	$(CC) -o bin/linked_list src/linked_list.c

linked_list_testing: src/linked_list_testing.c src/linked_list.c src/linked_list.h
	$(CC) -o bin/linked_list_testing src/linked_list_testing.c