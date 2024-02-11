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
  while (cur)
  {
    printf("'%s'", cur->text);
    cur = cur->next;
  }
  printf("]\n");
  return;

  /* About 10 lines of code
     The output should match Python's
     list output

     ['Hello world', 'Catch phrase']

Use printf cleverly, *not* string
concatenation since this is C, not Python.
  */
}

/* len(lst) */
int pylist_len(const struct pylist *self)
{
  /* One line of code */
  return 42;
}

/* lst.append("Hello world") */
void pylist_append(struct pylist *self, char *str)
{
  /* CASE 1 head is NULL - replace head; next remains NULL; tail remains NULL*/
  if (self->head == NULL)
  {
    self->head = malloc(sizeof(self->head));
    // here's where i understand how nice it is to use pointers
    // the thing that is passed in already has been allocated
    // so if we just point to it, we don't have to allocate
    self->head->text = str;
    return;
  }
  else if (self->tail == NULL)
  {
    self->tail = malloc(sizeof(self->tail));
    self->head->next = self->tail;
    self->tail->text = str;
  }

  /* CASE 2 insert in middle */

  /* CASE 3 insert at end*/
  /* Review: Chapter 6 lectures and assignments */
}
/* lst.index("Hello world") - if not found -1 */
int pylist_index(struct pylist *self, char *str)
{
  /* Seven or so lines of code */
  return 42;
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
  // pylist_append(lst, "Brian");
  // pylist_print(lst);
  // printf("Length = %d\n", pylist_len(lst));
  // printf("Brian? %d\n", pylist_index(lst, "Brian"));
  // printf("Bob? %d\n", pylist_index(lst, "Bob"));
  // pylist_del(lst);
}
