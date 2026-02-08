CC=clang
CFLAGS=-std=c99 -g -Wall -Werror

all: LinkedListTest linked_list linked_list_testing

LinkedListTest: src/LinkedListTest.c
	$(CC) $(CFLAGS) -o bin/LinkedListTest src/LinkedListTest.c

linked_list: src/linked_list.c
	$(CC) $(CFLAGS) -c src/linked_list.c -o bin/linked_list.o

linked_list_testing: src/linked_list_testing.c src/linked_list.c src/linked_list.h
	$(CC) $(CFLAGS) -o bin/linked_list_testing src/linked_list_testing.c bin/linked_list.o