#include <stdio.h>

struct point
{
  double x;
  double y;
};

void do_thing(pt) struct point pt;
{
  printf("inside function\n");
  pt.x = 909.7;
  pt.y = 1000.4;
  printf("  pt.x: %f\n  pt.x: %f\n", pt.x, pt.y);
}

int main()
{
  // struct point p1, p2;
  // p1.x = 99.7;
  // p1.y = 110.777;
  // p2 = p1;

  // printf("p2.x: %f, p2.y: %f", p2.x, p2.y);

  struct point p3;
  p3.x = 222.2;
  p3.y = 333.3;
  printf("before function call\n  p3.x: %f\n  p3.y: %f\n", p3.x, p3.y);
  do_thing(p3);
  printf("after function call\n  p3.x: %f\n  p3.y: %f\n", p3.x, p3.y);
}