/*
Using 'extern' data

You should write a function called bump() that uses an extern variable so that the first time it is called, it returns int 0, the next time it returns 1 and so on.
*/

#include <stdio.h>
extern int v;
int v = 0;
int bump()
{
  return v++;
}

#include <stdio.h>
int main()
{
  int bump();
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
}