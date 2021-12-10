#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int value;
  struct node *next;
} node_t;

void printlist(node_t *head) {

  node_t *temporary = head;

  while (temporary != NULL) {

    printf("%d - ", temporary->value);
    temporary = temporary->next;
  }
  printf("\n");
}

node_t *create_new_node(int value) {
  node_t *result = malloc(sizeof(node_t));
  result->value = value;
  result->next = NULL;
  return result;
}

int main() {
  node_t *head;
  node_t *tmp;

  for (int i = 0; i < 25; ++i) {
  }
  tmp = create_new_node(43);
  head = tmp;
  tmp = create_new_node(3);
  tmp->next = head;
  head = tmp;
  tmp = create_new_node(819);
  tmp->next = head;
  head = tmp;

  printlist(head);
  // printf("");

  return 0;
}
