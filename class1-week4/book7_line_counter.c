#include <stdio.h>

int main()
{
  int c, line_count;
  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
      line_count++;
  }
  printf("line_count: %d", line_count);
}