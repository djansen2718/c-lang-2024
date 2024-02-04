/* Python String Class

You will a set of supporting functions using the following structure to implement
a subset of the Python str class in C. Some code and method signatures have been
provided for you as well as a main() program and some support routines from the
lecture slides. In the constructor, you will allocate a 10 character buffer.
If as data is added, it exceeds the length of the buffer use realloc()
to expand the buffer by 10.
There is a good deal of discussion of this application in the lecture materials
associated with this assignment.
*/

/*
Expected output from your program:

Pystr length=0 alloc=10 data=
Pystr length=1 alloc=10 data=H
Pystr length=11 alloc=20 data=Hello world
String = A completely new string
Length = 23

*/

/* x = x + 'h'; */
#include <stdio.h>
#include <stdlib.h>

struct pystr
{
  int length;
  int alloc; /* the length of *data */
  char *data;
};

/* Constructor - x = str() */
struct pystr *pystr_new()
{
  struct pystr *p = malloc(sizeof(*p));
  p->length = 0;
  p->alloc = 10;
  p->data = malloc(10);
  p->data[0] = '\0';
  return p;
}

/* Destructor - del(x) */
void pystr_del(const struct pystr *self)
{
  free((void *)self->data); /* free string first */
  free((void *)self);
}

void pystr_dump(const struct pystr *self)
{
  printf("Pystr length=%d alloc=%d data=%s\n",
         self->length, self->alloc, self->data);
}

int pystr_len(const struct pystr *self)
{
  return self->length;
}

char *pystr_str(const struct pystr *self)
{
  return self->data;
}

/* MY CODE STARTS HERE*/
void pystr_append(struct pystr *self, char ch)
{
  /* Need about 10 lines of code here */
}

/* x = x + "hello"; */

void pystr_appends(struct pystr *self, char *str)
{
  /* Need a line or two of code here */
}

/* x = "hello"; */

void pystr_assign(struct pystr *self, char *str)
{
  /* Need about three lines of code here */
}

/* MY CODE ENDS HERE*/

int main(void)
{
  setvbuf(stdout, NULL, _IONBF, 0); /* Internal */

  struct pystr *x = pystr_new();
  pystr_dump(x);

  pystr_append(x, 'H');
  pystr_dump(x);

  pystr_appends(x, "ello world");
  pystr_dump(x);

  pystr_assign(x, "A completely new string");
  printf("String = %s\n", pystr_str(x));
  printf("Length = %d\n", pystr_len(x));
  pystr_del(x);
}
