#include <stdio.h>
static int accumulator = 0;

int sum(top_value)
int top_value;
{
  printf("accuumlator: %d\n", accumulator);
  printf("top_value: %d\n", top_value);
  if (top_value == 0)
  {
    return accumulator;
  }
  accumulator += top_value;
  sum(top_value - 1);
}

int main()
{
  printf("sum for 3 ... expect 6: %d", sum(3));
}