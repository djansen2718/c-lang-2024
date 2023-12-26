/*
0   32.0
  20   68.0
  40  104.0
  60  140.0
  80  176.0
 100  212.0
*/
#include <stdio.h>
main() /* Fix this to be Celsius-Fahrenheit table */
{
  int cel;
  for (cel = 0; cel <= 100; cel = cel + 20)
    printf("%4d %6.1f\n", cel, (cel) * (9.0 / 5.0) + 32);
}