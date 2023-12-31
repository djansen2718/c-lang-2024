/*
K&R Exercise 3-4.

Write a function itob(n, s) which converts the unsigned integer n into a binary (base 2) character representation in s. Write itoh, which converts an integer to hexadecimal representation. You can assume that the s variable contains enough space. Make sure to properly terminate s with the end-of-string marker '\0' before returning.

You can use reverse(s) to reverse a string - make sure you pass a character array and not a string constant to reverse.
*/

/*
42 in base-2 is 101010
42 in base-16 is 2a
16 in base-2 is 10000
16 in base-16 is 10
59 in base-2 is 111011
59 in base-16 is 3b
100 in base-2 is 1100100
100 in base-16 is 64
254 in base-2 is 11111110
254 in base-16 is fe
*/

#include <stdio.h>

void itob(n, s) int n;
char s[];
{
  int nearest_power();
  int power();
  int remaining = n;
  int power_of_two = nearest_power(n, 2);
  int i = 0;
  while (power_of_two > -1)
  {
    if (power(2, power_of_two) <= remaining)
    {
      s[i] = '1';
      remaining -= power(2, power_of_two);
    }
    else
    {
      s[i] = '0';
    }
    power_of_two--;
    i++;
  }
}

void itoh(n, s) int n;
char s[];

{
  int nearest_power();
  int power();
  int remaining = n;
  int power_of_sixteen = nearest_power(n, 16);
  int i = 0;
  // int j;
  // for (j = 0; j < 1000; j++)
  // {
  //   s[j] = '\0';
  // }
  while (power_of_sixteen > -1)
  {
    int sixteen_to_current_power = power(16, power_of_sixteen);
    char hex_digit();
    int this_digit_as_decimal = remaining / sixteen_to_current_power;
    char this_digit_as_char = hex_digit(this_digit_as_decimal);
    s[i] = this_digit_as_char;
    remaining -= this_digit_as_decimal * sixteen_to_current_power;

    power_of_sixteen--;
    i++;
  }
}

#include <stdio.h>
int nearest_power(n, base)
int n;
int base;
{
  int i;
  int power();
  for (i = 0; i < 1000; i++)
  {
    if (power(base, i) > n)
      return i - 1;
  }
  return 1000;
}

int power(base, exp)
int base;
int exp;
{
  int i, result;
  result = 1;
  for (i = 0; i < exp; i++)
  {
    result *= base;
  }
  return result;
}

char hex_digit(decimal_value)
char decimal_value;
{
  switch (decimal_value)
  {
  case (0):
    return '0';
  case (1):
    return '1';
  case (2):
    return '2';
  case (3):
    return '3';
  case (4):
    return '4';
  case (5):
    return '5';
  case (6):
    return '6';
  case (7):
    return '7';
  case (8):
    return '8';
  case (9):
    return '9';
  case (10):
    return 'a';
  case (11):
    return 'b';
  case (12):
    return 'c';
  case (13):
    return 'd';
  case (14):
    return 'e';
  case (15):
    return 'f';
  default:
    return 'z';
  }
}

int main()
{
  int power();
  int nearest_power_of_two();
  char hex_digit();
  void itob(int n, char s[]);
  char s[1000];
  itob(42, s);
  printf("42 in base-2 is %s\n", s);
  itoh(42, s);
  printf("42 in base-16 is %s\n", s);

  itob(16, s);
  printf("16 in base-2 is %s\n", s);
  itoh(16, s);
  printf("16 in base-16 is %s\n", s);
}