#include <stdio.h>
#include <stdlib.h>

int main()
{
  char mem[256];
  mem[0] = 'a';
  printf("mem[0]: %d\n", mem[0]);
  printf("mem[0]: %c\n", mem[0]);

  mem[1] = 98;
  printf("mem[1]: %d\n", mem[1]);
  printf("mem[1]: %c\n", mem[1]);

  char blah[] = "99";
  int blah_int = atoi(blah);
  mem[2] = blah_int;
  printf("mem[2]: %d\n", mem[2]);
  printf("mem[2]: %c\n", mem[2]);
}