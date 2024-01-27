#include <stdio.h>
struct point
{
  double x;
  double y;
};

void do_a_thing(pt) struct point *pt;
{
  (*pt).x = 555.55;
  (*pt).y = 444.44;
}
int main()
{

  struct point pt, *ppt;
  pt.x = 1.1;
  pt.y = 2.2;
  ppt = &pt;
  printf("Before Function Call:\n  pt.x: %f\n  pt.y: %f\n", pt.x, pt.y);
  do_a_thing(ppt);
  printf("After Function Call:\n  pt.x: %f\n  pt.y: %f\n", pt.x, pt.y);
  printf("ppt: %p\nppt->x: %f\n(*ppt).y: %f", ppt, ppt->x, (*ppt).y);
}
