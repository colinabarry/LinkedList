#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Node_T *head = NULL;
    Node_T *tmp;
    int numNodes;

    printf("How many nodes would you like?");
    scanf("%d", &numNodes);

    for (int i = 0; i < numNodes; ++i) {
        tmp = createNewNode(i);
        head = insertAtHead(&head, tmp);
    }

    printList(head);
}