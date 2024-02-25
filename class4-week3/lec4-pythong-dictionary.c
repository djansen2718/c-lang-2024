#include <stdlib.h>

struct dnode
{
  char *key;
  char *value;
  struct dnode *next;
};

struct pydict
{
  struct dnode *head;
  struct dnode *tail;
  int count;
};

/* Constructor */
struct pydict *pydict_new()
{
  struct pydict *p = malloc(sizeof(*p));
  p->head = NULL;
  p->tail = NULL;
  p->count = 0;
  return p;
}

/* Destructor */
void pydict_del(struct pydict *self)
{
  int i;
  struct dnode *cur, *next;
  cur = self->head;
  while (cur)
  {
    free(cur->key);
    free(cur->value);
    next = cur->next;
    free(cur);
    cur = next;
  }
  free((void *)self);
}