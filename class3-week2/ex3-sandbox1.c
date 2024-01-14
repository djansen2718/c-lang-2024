#include <stdio.h>
#include <string.h>
int main()
{
  void py_lstrip();
  char p[12] = "    \t\nthings";
  printf("^^^%s^^^\n", p);
  py_lstrip(p);
  printf("^^^%s^^^\n", p);
}

void py_lstrip(inp) char inp[];
{
  void shift_left();
  int i = 0;
  while (inp[i] == ' ' || inp[i] == '\t' || inp[i] == '\n')
  {
    shift_left(inp);
  }
}

void shift_left(s) char *s;
{
  int i;
  int string_length = strlen(s);
  for (i = 0; i < string_length; i++)
  {
    s[i] = s[i + 1];
  }
}