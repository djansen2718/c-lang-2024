#include <stdio.h>

int main()
{
  struct point
  {
    double x;
    double y;
  };
  struct point p1, p2;
  p1.x = 99.7;
  p1.y = 110.777;
  p2 = p1;

  printf("p2.x: %f, p2.y: %f", p2.x, p2.y);
}