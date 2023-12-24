/* Exercise RS-7: Write a C program to determine the minimum and maximum of a sequence of integer numbers on input,
terminated by the string "done".
The patterns for input and output should match the following Python application.
Make sure that the input lines can be at least 1000 characters.
Use a middle-tested while loop, gets() and atoi()
to mimic the Python code below. See the lecture for guidance. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int max, min, start;
  char input_val[1001];
  start = 1;
  while (gets(input_val) != NULL)
  {
    if (strcmp(input_val, "done") == 0)
      break;
    if (strcmp(input_val, "") == 0)
      break;
    int input_as_int = atoi(input_val);
    if (start || input_as_int < min)
      min = input_as_int;
    if (start || input_as_int > max)
      max = input_as_int;
    start = 0;
  }
  printf("Maximum %d\n", max);
  printf("Minimum %d\n", min);
}