#include <stdio.h>
int main()
{
  int _potato;

  printf("num: %d", 0x100);
  int _bool;
  _bool = (12 < 10);
  printf("bool: %i", _bool);
  if (0)
    printf("NOPE");
  if (1)
    printf("YEP");
  if (2)
    printf("YEP");
  if (-1)
    printf("YEP");

  int q, r, s, t;
  q = 7;
  r = q++;
  s = 7;
  t = ++s;
  printf("q: %d\nr: %d\ns: %d\nt: %d\n", q, r, s, t);
}