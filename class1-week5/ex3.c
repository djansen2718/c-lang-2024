#include <stdio.h>
main()
{
  int c, previous;
  while ((c = getchar()) != EOF)
  {
    if (previous == ' ' && c == ' ')
    {
    }
    else
    {

      putchar(c);
    }
    previous = c;
  }
}