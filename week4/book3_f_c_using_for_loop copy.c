#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
  printf("   F        C\n");
  int f;
  for (f = LOWER; f <= UPPER; f = f + STEP)
  {
    printf("%4d     %6.1f\n", f, (f - 32.0) * (5.0 / 9.0));
  }
}