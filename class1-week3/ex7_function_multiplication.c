#include <stdio.h>

int main()
{
  int result;
  int my_mult();

  result = my_mult(6, 7);
  printf("%d", result);
}

int my_mult(num_a, num_b)
int num_a, num_b;
{
  int num_c = num_a * num_b;
  return num_c;
}