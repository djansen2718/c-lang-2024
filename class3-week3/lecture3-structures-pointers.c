#include <stdio.h>

int main()
{
  struct point
  {
    double x;
    double y;
  };

  struct point pt, *pp;
  pt.x = 999.9;
  pp = &pt;
  (*pp).y = 111.1;

  printf("pt.x: %f\npt.y: %f\n*pp.x: %f\n*pp.y: %f\n", pt.x, pt.y, (*pp).x, (*pp).y);
}
