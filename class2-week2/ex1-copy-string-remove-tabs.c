/*
K&R Exercise 3-1.

You should write a function called expand(s, t) that copies the string s to t
expanding newlines and tabs to '\n' and '\t' respectively.
Use a switch statement (it will be a short switch statement).
You can assume that the t variable contains enough space.
Make sure to properly terminate t with the end-of-string marker '\0'.

*/

#include <stdio.h>
int main()
{
  char t[1000];
  void expand();
  expand("Hello world", t);
  printf("%s\n", t);
  expand("Hello world\n", t);
  printf("%s\n", t);
  expand("Hello\tworld\n", t);
  printf("%s\n", t);
  expand("Hello\tworld\nHave a nice\tday\n", t);
  printf("%s\n", t);
}

// void expand(s, t) char s[], t[];
// {
//   int i, j;
//   for (i = 0, j = 0; s[i]; i++)
//   {
//     t[j++] = s[i];
//   }
//   t[j] = '\0';
//   int k;
//   for (k = 0; s[k]; k++)
//   {
//     printf("s[k]: %c   t[k]: %c\n", s[k], t[k]);
//   }
// }

void expand(s, t) char s[], t[];
{
  int i = 0;
  int j = 0;
  while (s[i])
  {
    switch (s[i])
    {
    case '\0':
      t[j] = '\0';
      i++;
      j++;
      break;
    case '\t':
      t[j] = '\\';
      t[++j] = 't';
      i++;
      j++;
      break;
    case '\n':
      t[j] = '\\';
      t[++j] = 'n';
      i++;
      j++;
      break;
    default:
      t[j] = s[i];
      i++;
      j++;
      break;
    }
  }
}
