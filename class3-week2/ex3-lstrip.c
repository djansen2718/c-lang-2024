/*
Exercise RS-12: Write a C function called py_lstrip() that removes whitespace
(blanks, tabs, and newlines) from the beginning of a string.
This function modifies its parameter and should never be called with a constant value.
*/

void py_lstrip(inp) char *inp;
{
  int i = 0;
  while (inp[i] == ' ' || inp[i] == '\t' || inp[i] == '\n')
  {
    inp = &inp[i + i];
  }
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char s1[] = "   Hello   World    ";
  void py_lstrip();
  py_lstrip(s1);
  printf("-%s-\n", s1);
}