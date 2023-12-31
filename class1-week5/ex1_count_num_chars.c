#include <stdio.h>

int main()
{
  int count_chars();
  int blah;
  blah = count_chars("abc");
  printf("len: %d", blah);
}
int count_chars(ch)
char ch[1000];
{
  int i = 0;
  while (i < 1000)
  {
    if (ch[i] == '\0')
      return i;
    i++;
}
  return -1;
}