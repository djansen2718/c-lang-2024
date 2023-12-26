#include <stdio.h>
#include <string.h>

int main()
{
  // char t[1000];
  char *copy();
  void reverse();
  // copy("Hello world", t);
  char t[] = "Hello world";
  printf("%s\n", t);
  reverse(t);
  printf("%s\n", t);
}

void reverse(char t[])
{
  int count_chars();
  int NUM_CHARS = count_chars(t);
  printf("ch: %s\n", t);

  /* Switch places*/
  printf("*** Switching Places\n");
  int num_loops = NUM_CHARS / 2;
  printf("num_loops: %d\n", num_loops);

  int r, l, loop_count;
  l = 0;
  r = NUM_CHARS;
  loop_count = 1;
  while (loop_count <= num_loops)
  {
    printf("before...loop_count: %d, ch: %s\n", loop_count, t);
    t[r] = t[l];
    t[l] = t[r - 1];
    t[r - 1] = ' '; // not strictly necessary, but easier to follow that this is blanked out
    loop_count++;
    l++;
    r--;
    printf("after...loop_count: %d, ch: %s\n", loop_count, t);
  }

  /* Shift right to left*/
  printf("*** Shifting right to left\n");
  // l = 0;
  r = NUM_CHARS - (num_loops - 1);
  loop_count = 1;
  while (loop_count <= num_loops)
  {
    printf("before...loop_count: %d, ch: %s\n", loop_count, t);
    t[r - 1] = t[r];
    r++;
    loop_count++;
    printf("after...loop_count: %d, t: %s\n", loop_count, t);
  }

  t[NUM_CHARS] = '\0';
  printf("ch: %s\n", t);
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