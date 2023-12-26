#include <stdio.h>

int main()
{
  int c, char_count;
  char_count = 0;
  while ((c = getchar()) != EOF)
  {
    char_count++;
    printf("%5d", char_count);
  }
}