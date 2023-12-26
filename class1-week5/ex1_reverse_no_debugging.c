#include <stdio.h>
#include <string.h>

int main()
{
  char *copy();
  void reverse();
  char t[] = "Hello world";
  reverse(t);
}

void reverse(char t[])
{
  int count_chars();
  int NUM_CHARS = count_chars(t);

  /* Switch places*/
  int num_loops = NUM_CHARS / 2;

  int r, l, loop_count;
  l = 0;
  r = NUM_CHARS;
  loop_count = 1;
  while (loop_count <= num_loops)
  {
    t[r] = t[l];
    t[l] = t[r - 1];
    t[r - 1] = ' '; // not strictly necessary, but easier to follow that this is blanked out
    loop_count++;
    l++;
    r--;
  }

  /* Shift right to left*/
  // l = 0;
  r = NUM_CHARS - (num_loops - 1);
  loop_count = 1;
  while (loop_count <= num_loops)
  {
    t[r - 1] = t[r];
    r++;
    loop_count++;
  }

  t[NUM_CHARS] = '\0';
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