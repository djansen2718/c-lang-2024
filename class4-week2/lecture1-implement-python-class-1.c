#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point
{
  double x;
  double y;

  void (*del)(const struct Point *self);
  void (*dump)(const struct Point *self);
  double (*origin)(const struct Point *self);
};

void point_dump(const struct Point *self)
{
  printf("Object point @%p x=%f y=%f\n", self, self->x, self->y);
}

void point_del(const struct Point *self)
{
  free((void *)self);
}

double point_origin(const struct Point *self)
{
  return sqrt(self->x * self->x + self->y * self->y);
}

struct Point *point_new(double x, double y)
{
  struct Point *p = malloc(sizeof(*p));
  p->x = x;
  p->y = y;
  p->dump = &point_dump;
  p->del = &point_del;
  p->origin = &point_origin;
  return p;
}

int main(void)
{
  struct Point *pt = point_new(3.0, 4.0);
  pt->dump(pt);
  printf("Origin %f\n", pt->origin(pt));
  pt->del(pt);
}