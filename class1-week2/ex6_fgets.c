#include <stdio.h>

int main()
{
  char line[1000];
  printf("gimme a line\n");
  fgets(line, 999, stdin);
  printf("here's the line: %s\n", line);
}