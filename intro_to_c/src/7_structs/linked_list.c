#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

List *list_init()
{
  List *list = malloc(sizeof(List));
  list->head = NULL;
  list->tail = NULL;

  return list;
}

void list_append(List *list, int value)
{
  Node *node = malloc(sizeof(Node));
  node->value = value;
  node->next = NULL;

  if (list->head == NULL)
  {
    list->head = node;
  }
  else
  {
    list->tail->next = node;
  }
  list->tail = node;
}

void list_print(List *list)
{
  for (Node *current = list->head; current; current = current->next)
  {
    printf("%i\n", current->value);
  }
}

void list_destroy(List *list)
{
  if (list->head)
  {
    Node *curr = list->head->next;
    Node *prev = list->head;

    while (curr)
    {
      free(prev);
      prev = curr;
      curr = curr->next;
    }
    free(prev);
  }
  free(list);
}
