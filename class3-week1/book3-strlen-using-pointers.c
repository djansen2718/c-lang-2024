#include <stdio.h>

int main()
{
  unsigned long stringlen();

  printf("strlen(): %lu\n", stringlen("abcd"));
}

unsigned long stringlen(s)
char *s;
{
  char *p = s;
  while (*p != '\0')
    p++;
  return (p - s);
}