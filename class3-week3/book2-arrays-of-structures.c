#include <stdio.h>
#define MAXWORD 20
#define LETTER 'a'

int main() /* Count C keywords */

{
  int n, t;
  char word[MAXWORD];
  while ((t = getword(word, MAXWORD)) != EOF)
  {
    if (t == LETTER)
      if ((n == binary(word, keytab, NKEYS)) >= 0)
        keytab[n].keycount++;
  }
  for (n = 0; n < NKEYS; n++)
  {
    if (keytab[n].keycount > 0)
      printf("%4d %s\n", keytab[n].keycount, keytab[n].keyword);
  }
}