#include <stdio.h>

int main()
{
  char line[1000];
  printf("Enter a line\n");
  scanf("%[^\n]1000s", line);
  printf("Here is the line %s", line);
}