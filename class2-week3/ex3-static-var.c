static int count = 0;

int bump()
{
  // return count++;
  return count++;
}

void start(new_val) int new_val;
{
  count = new_val;
}

#include <stdio.h>
int main()
{
  int bump();
  void start();
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  start(42);
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
}