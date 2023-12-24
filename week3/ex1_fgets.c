#include <stdio.h>

int main()
{
  FILE *fl;
  char line[100];
  fl = fopen("blah.txt", "r");
  while (fgets(line, 10, fl) != NULL)
  {
    printf("%s", line);
  }
}