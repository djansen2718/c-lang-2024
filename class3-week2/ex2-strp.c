/*
Exercise RS-11: Write a C function called py_rstrip() that removes spaces from the end of a string.
This function modifies its parameter and should never be called with a constant value.
*/

#include <stdio.h>
#include <string.h>
int main()
{
  char s1[] = "   Hello   World    ";
  void py_rstrip();
  py_rstrip(s1);
  printf("-%s-\n", s1);
}

void py_rstrip(str) char *str;
{
  int str_len = strlen(str);
  /* remove terminator char*/
  str[str_len] = '\0';
  int i = str_len - 1;
  while (str[i] == ' ')
  {
    str[i] = '\0';
    i--;
  }
}