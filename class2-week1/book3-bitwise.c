#include <stdio.h>

int main()
{
  // bitwise AND (&)
  int a, b, c, d, e, f, g, h;
  a = 0b00001111;
  b = 0b11110000;
  c = 0b10101010;

  d = a & b;
  e = a & c;
  f = b & c;

  printf("expected:\n 00000000\n 0\n %d\n", d);
  printf("expected:\n 00001010\n 10\n %d\n", e);
  printf("expected:\n 10100000\n 160\n %d\n", f);

  // bitwise OR (|)
  a = 0b00001111;
  b = 0b11110000;
  c = 0b10101010;

  d = a | b;
  e = a | c;
  f = b | c;

  printf("expected:\n11111111\n255\n%d\n", d);
  printf("expected:\10101111\n175\n%d\n", e);
  printf("expected:\n11111010\n250\n%d\n", f);

  // bitwise XOR (^)
  a = 0b00001111;
  b = 0b11110000;
  c = 0b10101010;

  d = a ^ b;
  e = a ^ c;
  f = b ^ c;

  printf("expected:\n11111111\n255\n%d\n", d);
  printf("expected:\10100101\n165\n%d\n", e);
  printf("expected:\n01011010\n90\n%d\n", f);

  // 1's complement
}