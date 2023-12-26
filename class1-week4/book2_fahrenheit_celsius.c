#include <stdio.h>

int main()
{
  int fahrenheit_start, fahrenheit_end, fahrenheit_step;
  float fahrenheit_current, celsius_current;
  fahrenheit_current = 0.0;
  fahrenheit_step = 20;
  fahrenheit_end = 300;
  printf("F     C\n");
  while (fahrenheit_current <= fahrenheit_end)
  {
    celsius_current = (fahrenheit_current - 32.0) * (5.0 / 9.0);
    printf("%4.0f     %6.1f\n", fahrenheit_current, celsius_current);
    fahrenheit_current = fahrenheit_current + fahrenheit_step;
  }
}