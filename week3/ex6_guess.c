/* Exercise RS-8: Write a C program to play a guessing game with the user
that is equivalent to the Python program below.
Your program should use a while loop and multi-way branch if (i.e. use else if).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int input_as_int;
  while (scanf("%d", &input_as_int) != EOF)
  {
    if (input_as_int == 42)
    {
      printf("Nice work!");
      break;
    }
    else if (input_as_int < 42)
    {
      printf("Too low - guess again\n");
    }
    else
    {
      printf("Too high - guess again\n");
    }
  }
}