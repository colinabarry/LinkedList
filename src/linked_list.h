#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct node *next;
} Node_T;

Node_T *createNewNode(int value);
Node_T *insertAtHead(Node_T **head, Node_T *nodeToInsert);
void insertAfterNode(Node_T *nodeToInsertAfter, Node_T *newNode);
Node_T *findNode(Node_T *head, int value);
void printList(Node_T *head);

#endif