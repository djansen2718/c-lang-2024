#include <stdio.h>

int main()
{
  int a, b, c, d, e, f, g, h;
  a = 16; // 10000
  b = a & 1;
  c = a & 2;
  d = a & 3;
  e = a & 4;
  f = a & 8;
  g = a & 16;

  printf("%d   %d   %d   %d   %d   %d   %d  ", a, b, c, d, e, f, g);
}