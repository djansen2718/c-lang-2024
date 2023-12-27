#include <stdio.h>

int main()
{

  float q, r, s, t, u;
  q = 4.3;
  r = 1.7e12;
  s = 1.7e5;
  t = 1.7e2;
  u = 1.7e-2;

  printf("%20.4f \n%12.3f \n%12.3f \n%12.3f \n", r, s, t, u);
}