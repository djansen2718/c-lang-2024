#include <stdio.h>

int main()
{
  int x, y;
  int *px;

  x = 12;

  // `y = x` is equivalent to the two lines below
  px = &x;
  y = *px;

  printf("x:        %d\n", x);
  printf("y:        %d\n", y);

  *px = 999;
  printf("x:        %d\n", x);
  printf("y:        %d\n", y);
  printf("*px:        %d\n", *px);

  char a, b;
  char *pa;
  a = 'a';
  pa = &a;
  printf("*pa: %c\n", *pa);
}
