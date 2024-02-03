#include <stdio.h>
#include <stdlib.h>

struct lnode
{
  int value;
  struct lnode *next;
};

struct list
{
  struct lnode *head;
  struct lnode *tail;
};

int main()
{
  void list_add();
  void list_dump();
  void list_remove();
  struct lnode *list_find();

  struct list mylist;
  struct lnode *mynode;

  mylist.head = NULL;
  mylist.tail = NULL;

  list_add(&mylist, 10);
  list_add(&mylist, 20);
  list_add(&mylist, 30);
  printf("Expected: 10, 20, 30");
  list_dump(&mylist);

  printf("list_remove(&mylist, 42);\n");
  list_remove(&mylist, 42);
  printf("Expected: 10, 20, 30");
  list_dump(&mylist);

  printf("list_remove(&mylist, 10);\n");
  list_remove(&mylist, 10);
  printf("Expected: 20, 30");
  list_dump(&mylist);

  printf("list_remove(&mylist, 30);\n");
  list_remove(&mylist, 30);
  printf("Expected: 20");
  list_dump(&mylist);

  printf("list_add(&mylist, 40);\n");
  list_add(&mylist, 40);

  printf("Expected: 20, 40");
  list_dump(&mylist);
}

void list_dump(lst) struct list *lst;
{
  struct lnode *cur;
  printf("\nDump:\n");
  for (cur = lst->head; cur != NULL; cur = cur->next)
  {
    printf("  %d\n", cur->value);
  }
}

/* Code I am; editing below: */
void list_add(lst, value) struct list *lst;
int value;
{
  struct lnode *new_node = (struct lnode *)
      malloc(sizeof(struct lnode));
  new_node->value = value;
  new_node->next = NULL;
  int i;
  if (lst->head == NULL)
  {
    lst->head = new_node;
    return;
  }
  else if (lst->head->next == NULL)
  {
    lst->head->next = new_node;
    lst->tail = new_node;
    return;
  }
  else
  {
    struct list *new_list = (struct list *)
        malloc(sizeof(struct list));
    new_list->head = lst->head->next;
    new_list->tail = lst->tail;
    list_add(new_list, value);
  }

  /* Append the value to the end of the linked list. */
}

void list_remove(lst, value) struct list *lst;
int value;
{
  /* Remove the value from the linked list. */
  struct lnode *curr, *prev;
  curr = lst->head;
  prev = NULL;
  while (1)
  {
    if (curr->value == value)
    {
      if (prev == NULL)
      {
        /* Case 1: value at beginning of list*/
        lst->head = lst->head->next;
        // free current
        return;
      }
      else if (curr == lst->tail)
      {
        /* Case 3: value at end of list*/
        lst->tail = prev;
        // free current
        return;
      }
      else
      {
        /* Case 2: value in middle of list*/
        prev->next = curr->next;
        // free current
        return;
      }
    }
    if (curr->next == NULL)
    {
      /* Case 4: value not in list*/
      return;
    }
    prev = curr;
    curr = curr->next;
  }
}