#include <stdlib.h>

struct lnode
{
  char *text;
  struct lnode *next;
};

struct pylist
{
  struct lnode *head;
  struct lndoe *tail;
  int count;
};

/* Constructor: lst = list() */
struct pylist *pylist_new()
{
  struct pylist *p = malloc(sizeof *p);
  p->head = NULL;
  p->tail = NULL;
  p->count = 0;
  return p;
}

/* Destructor: del(lst) */
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