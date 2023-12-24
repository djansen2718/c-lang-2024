#include <stdio.h>

int main()
{
  int us_floor, eu_floor;
  printf("Enter US Floor:\n");
  scanf("%d", &us_floor);
  // scanf("%d", us_floor); /* this would point to the address of us_floor rather than the value */
  eu_floor = us_floor - 1;
  printf("EU Floor: %d\n", eu_floor);
  // printf("What if I call it a string %s\n", eu_floor); /* if so, it warns on compile, completes it, but then ha a seg fault */
}