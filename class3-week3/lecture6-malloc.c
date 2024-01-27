#include <stdio.h>
#include <stdlib.h>

struct point
{
  double x;
  double y;
};

int main()
{
  struct point *ppt;
  ppt = (struct point *)malloc(sizeof(struct point));
  ppt->x = 4.4;
  (*ppt).y = 99;
  printf("x: %f\ny: %f", (*ppt).x, ppt->y);
}
