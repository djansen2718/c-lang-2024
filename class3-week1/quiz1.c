#include <stdio.h>

int main()
{
  int x;
  int *px;
  px = &x;
  printf("x: %d\n", x);
  printf("px: %p\n", px);
}