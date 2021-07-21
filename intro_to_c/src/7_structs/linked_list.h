// Linked List
// - Every node has a pointer to the next node
// - Linked List has a reference to the first and last nodes

#pragma once

// Node
struct linked_list_node;
typedef struct linked_list_node Node;

// Linked List
struct linked_list_node
{
  // Node's value
  int value;
  // Pointer to next node
  Node *next;
};

// Linked List
struct linked_list;
typedef struct linked_list List;

struct linked_list
{
  Node *head;
  Node *tail;
};

// Declaring Linked List methods

List *list_init();
void list_append(List *list, int value);
void list_print(List *list);
void list_destroy(List *list);
