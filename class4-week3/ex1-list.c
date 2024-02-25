/*
Python List Class

You will a set of supporting functions using the following structures
to implement a subset of the Python list class in C.
Some code and method signatures have been provided for you
as well as a main() program and some support routines from the lecture slides.
There is a good deal of discussion of this application in the lecture
materials associated with this assignment.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lnode
{
  char *text;
  struct lnode *next;
};

struct pylist
{
  struct lnode *head;
  struct lnode *tail;
  int count;
};

/* Constructor - lst = list() */
struct pylist *pylist_new()
{
  struct pylist *p = malloc(sizeof(*p));
  p->head = NULL;
  p->tail = NULL;
  p->count = 0;
  return p;
}

/* Destructor - del(lst) */
void pylist_del(struct pylist *self)
{
  struct lnode *cur, *next;
  cur = self->head;
  while (cur)
  {
    free(cur->text);
    next = cur->next;
    free(cur);
    cur = next;
  }
  free((void *)self);
}

/*
['Hello world']
['Hello world', 'Catch phrase']
['Hello world', 'Catch phrase', 'Brian']
Length = 3
Brian? 2
Bob? -1
*/

/* **************************************** */
/* **************************************** */
/* **************************************** */
/* **************************************** */
/* **************************************** */
/* MY CODE STARTS HERE */
/* print(lst) */
void pylist_print(struct pylist *self)
{
  printf("[");
  struct lnode *cur;
  cur = self->head;
  printf("'%s'", cur->text);
  cur = cur->next;
  while (cur)
  {
    printf(", '%s'", cur->text);
    cur = cur->next;
  }
  printf("]\n");
  return;
}

/* len(lst) */
int pylist_len(const struct pylist *self)
{
  return self->count;
}

/* lst.append("Hello world") */
void pylist_append(struct pylist *self, char *str)
{
  if (self->head == NULL)
  {
    self->head = malloc(sizeof(self->head));
    self->head->text = malloc(sizeof(str));
    strcpy(self->head->text, str);
  }
  else if (self->tail == NULL)
  {
    self->tail = malloc(sizeof(self->tail));
    self->tail->text = malloc(sizeof(str));
    self->head->next = self->tail;
    strcpy(self->tail->text, str);
    self->tail->next = NULL;
  }
  else
  {
    struct lnode *cur = malloc(sizeof(*cur));
    cur->text = malloc(sizeof(str));
    strcpy(cur->text, str);
    cur->next = NULL;
    self->tail->next = cur;
    self->tail = cur;
  }
  self->count++;
  return;
}
/* lst.index("Hello world") - if not found -1 */
int pylist_index(struct pylist *self, char *str)
{
  struct lnode *cur = malloc(sizeof(*cur));
  cur = self->head;
  int index = 0;
  while (cur)
  {
    if (strcmp(cur->text, str) == 0)
    {
      return index;
    }
    index++;
    cur = cur->next;
  }
  return -1;
}

/* MY CODE ENDS HERE */
/* **************************************** */
/* **************************************** */
/* **************************************** */
/* **************************************** */
/* **************************************** */

int main(void)
{
  setvbuf(stdout, NULL, _IONBF, 0); /* Internal */

  struct pylist *lst = pylist_new();
  pylist_append(lst, "Hello world");
  pylist_print(lst);
  pylist_append(lst, "Catch phrase");
  pylist_print(lst);
  pylist_append(lst, "Brian");
  pylist_print(lst);
  printf("Length = %d\n", pylist_len(lst));
  printf("Brian? %d\n", pylist_index(lst, "Brian"));
  printf("Bob? %d\n", pylist_index(lst, "Bob"));
  pylist_del(lst);
}
