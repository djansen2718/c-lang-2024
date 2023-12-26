#include <ctype.h>
#include <stdio.h>

main() /* count new lines in input */
{
  int c, nl, blanks;
  nl = blanks = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
    {
      ++nl;
      printf("Added a newline");
    }
    // if (c == ' ' )
    if (isspace(c))
    {
      ++blanks;
      printf("Added a blank");
    }
  }
  printf("%d %d\n", nl, blanks);
}