/*
K&R Exercise 2-2.

You should write a function (no #include statements are needed) called htoi(str) that converts hexadecimal constant (base-16 0-9 and a-f) to an integer. There will not be a '0x' prefix (like in C) - just assume the input is a hex number. You should not use ctype.h and your code can assume the ASCII character set.

Each time you run the program, the values you need to convert b413e (base-16) to 737598 (base-10) may be different each time you run the code.
*/

#include <stdio.h>
int main()
{
  int htoi();
  int power();
  int atoi();
  int res, power_check;
  res = htoi("100");
  printf("result: %d\n", res);
}

int htoi(s)
char s[];
{
  int len(), power(), hex_digit_to_int();
  int length, i, result;
  length = len(s);
  result = 0;
  for (i = 0; i < length; i++)
  {
    int int_value_of_hex_digit = hex_digit_to_int(s[i]);
    int val_to_add = (int_value_of_hex_digit * power(16, length - i - 1));
    result += val_to_add;
  }
  return result;
}

int len(s)
char s[];
{
  int i;
  for (i = 0; i < 1000; i++)
  {
    if (s[i] == '\0')
      return i;
  }
  return i;
}

int power(base, exp)
int base;
int exp;
{
  int i, res;
  res = 1;

  for (i = 1; i <= exp; i++)
  {
    res *= base;
  }
  return res;
}

int hex_digit_to_int(c)
char c;
{
  if (c == '0')
    return 0;
  else if (c == '1')
    return 1;
  else if (c == '2')
    return 2;
  else if (c == '3')
    return 3;
  else if (c == '4')
    return 4;
  else if (c == '5')
    return 5;
  else if (c == '6')
    return 6;
  else if (c == '7')
    return 7;
  else if (c == '8')
    return 8;
  else if (c == '9')
    return 9;
  else if (c == 'a' || c == 'A')
    return 10;
  else if (c == 'b' || c == 'B')
    return 11;
  else if (c == 'c' || c == 'C')
    return 12;
  else if (c == 'd' || c == 'D')
    return 13;
  else if (c == 'e' || c == 'E')
    return 14;
  else if (c == 'f' || c == 'F')
    return 15;
  else
    return 100000;
}