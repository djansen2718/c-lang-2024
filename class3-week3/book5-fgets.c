#include <stdio.h>
#define MAXLINE 10

int main()
{

  char line[MAXLINE];

  while (fgets(line, MAXLINE, stdin) != NULL)
  {
    printf("%s", line);
  }
  printf("out of the fgets");}
