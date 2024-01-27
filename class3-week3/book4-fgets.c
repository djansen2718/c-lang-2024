#include <stdio.h>

int main()
{
  char line[11];

  while (fgets(line, 10, stdin) != NULL)
  {
    printf("%s", line);
  }
}