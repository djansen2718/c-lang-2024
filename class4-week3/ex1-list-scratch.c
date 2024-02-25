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

int main(void)
{
  setvbuf(stdout, NULL, _IONBF, 0); /* Internal */

  struct pylist *lst = pylist_new();
  struct lnode *cur
  // pylist_append(lst, "Hello world");
  // pylist_print(lst);
  // pylist_append(lst, "Catch phrase");
  // pylist_print(lst);
  // pylist_append(lst, "Brian");
  // pylist_print(lst);
  // printf("Length = %d\n", pylist_len(lst));
  // printf("Brian? %d\n", pylist_index(lst, "Brian"));
  // printf("Bob? %d\n", pylist_index(lst, "Bob"));
  // pylist_del(lst);
}
