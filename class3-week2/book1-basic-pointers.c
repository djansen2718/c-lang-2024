#include <stdio.h>

int main()
{
  int a = 99;
  int *pa;
  pa = &a;
  printf("a: %d\n", a);
  printf("*pa: %d\n", *pa);

  int b[10];
  int *pb;
  pb = &b[0];
  b[0] = 2000;
  printf("*pb %d\n", *pb);
}