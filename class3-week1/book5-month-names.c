#include <stdio.h>

int main()
{
  char *month_name();
  printf("month 13: %s\n", month_name(13));
  printf("month -1: %s\n", month_name(-1));
  printf("month  3: %s\n", month_name(3));
}

char *month_name(n)
{
  static char *name[] = {
      "nope",
      "Jan",
      "Feb",
      "Mar",
      "Apr",
      "May",
      "June",
      "Jul",
      "Aug",
      "Sep",
      "Oct",
      "Nov",
      "Dec"};
  return ((n < 1 || n > 12) ? name[0] : name[n]);
}