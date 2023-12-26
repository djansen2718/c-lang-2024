/*
FAHR   CELSIUS
===============
   0  -17.8
  40    4.4
  80   26.7
 120   48.9
 160   71.1
 200   93.3
 240  115.6
 280  137.8*/

#include <stdio.h>

int main()
{
  int fahr;
  float celsius;
  printf("FAHR   CELSIUS\n");
  printf("===============\n");
  for (fahr = 0; fahr < 300; fahr = fahr + 40)
  {
    celsius = (fahr - 32) * (5.0 / 9.0);
    printf(" %3d  %5.1f\n", fahr, celsius);
  };
}