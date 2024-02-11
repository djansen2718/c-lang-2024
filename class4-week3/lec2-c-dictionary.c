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

/* Constructor dct = dict() */
struct pydict *pydict_new()
{
  struct pydict *p = malloc(sizeof(*p));
  p->head = NULL;
  p->tail = NULL;
  p->count = 0;
  return p;
}
/* Destructor del(dct) */
void pydict_del(struct pydict *self)
{
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

int main()
{
  struct pydict *dct = pydict_new();
  // pydict_put(dct, "z", "value for Z");
}