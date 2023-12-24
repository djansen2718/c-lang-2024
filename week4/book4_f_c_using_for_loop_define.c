#include <stdio.h>

int main()
{
  printf("   F        C\n");
  int f;
  for (f = 0; f <= 300.0; f = f + 20.0)
  {
    printf("%4d     %6.1f\n", f, (f - 32.0) * (5.0 / 9.0));
  }
}