#include <stdio.h>

int main()
{
  int my_mult();
  int result;
  result = my_mult(7, 8);
  printf("The result is %d\n", result);
}

int my_mult(a, b)
int a, b;
{
  return a * b;
  // int c = a * b;
  // return c;
}