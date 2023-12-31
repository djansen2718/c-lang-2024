#include <stdio.h>

int main()
{
  int array_length();
  int q[12];
  q[0] = 88;
  q[11] = 123;
  q[1] = 100;
  q[2] = 999;
  q[3] = 999;
  q[4] = 999;
  q[5] = 999;
  q[6] = 999;
  q[7] = 999;
  q[8] = 999;
  q[9] = 999;
  q[10] = 999;
  printf("length of array: %d", array_length(q));
}

int array_length(a)
int *a;
{
  int *p = a;
  while (*p != '\0')
  {
    p++;
  }
  return p - a;
}