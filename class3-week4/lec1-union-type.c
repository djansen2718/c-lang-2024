#include <stdio.h>
#include <string.h>

int main()
{

  union sample
  {
    int i;
    char c[4];
    float f;
  };

  union sample u;

  u.i = 42;
  printf("%08d  %08x   %f   %s\n", u.i, u.i, u.f, u.c);

  u.i = 98;
  printf("%08d  %08x   %f   %s\n", u.i, u.i, u.f, u.c);

  strcpy(u.c, "Abc");
  printf("%08d  %08x   %f   %s\n", u.i, u.i, u.f, u.c);

  u.f = 99.72;
  printf("%08d  %08x   %f   %s\n", u.i, u.i, u.f, u.c);

  u.f = 1.0 / 3.0;
  printf("%08d  %08x   %f   %s\n", u.i, u.i, u.f, u.c);
}