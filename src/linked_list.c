#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

Node_T *createNewNode(int value) {
    Node_T *result = malloc(sizeof(Node_T));
    result->value = value;
    result->next = NULL;
    return result;
}

Node_T *insertAtHead(Node_T **head, Node_T *nodeToInsert) {
    nodeToInsert->next = *head;
    *head = nodeToInsert;
    return nodeToInsert;
}

void insertAfterNode(Node_T *nodeToInsertAfter, Node_T *newNode) {
    newNode->next = nodeToInsertAfter->next;
    nodeToInsertAfter->next = newNode;
}

Node_T *findNode(Node_T *head, int value) {
    Node_T *tmp = head;
    while (tmp != NULL) {
        if (tmp->value == value)
            return tmp;
        tmp = tmp->next;
    }
    return NULL;
}

void printList(Node_T *head) {
    Node_T *tmp = head;
    while (tmp != NULL) {
        printf("%d - ", tmp->value);
        tmp = tmp->next;
    }
    printf("\n");
}