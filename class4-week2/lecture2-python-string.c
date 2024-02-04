struct pystr
{
  int length;
  int alloc; /* The length of *data */
  char *data;
};

/* Constructor: x = str() */
struct pystr *pystr_new()
{
  struct pystr *p = malloc(sizeof(*p));
  p->length = 0;
  p->alloc = 10;
  p->data = malloc(10);
  p->data[0] = '\0';
  return p;
}

/* Destructor: del(x) */
void pystr_del(const struct pystr *self)
{
  free((void *)self->data); /* free the string first*/
  free((void *)self);
}

void pystr_dump(const struct pystr *self)
{
  printf("Pystr length=%d alloc =%d data=%s\n", self->length, self->alloc, self->data);
}

int pystr_len(const struct pystr *self)
{
  return self->length;
}

char *pystr_str(const struct pystr *self)
{
  return self->data;
}

/* x = x + 'h'; */
void pystr_append(struct pystr *self, char ch)
{
  /* TODO
   */
}

/* x = x + 'hello'; */
void pystr_appends(struct pystr *self, char *str)
{
  /* TODO   */
}

/* x = 'hello'; */
void pystr_assign(struct pystr *self, char *str)
{
  /* TODO */
}

int main(void)
{
  struct pystr *x = pystr_new();
}