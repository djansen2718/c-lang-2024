/*
Exercise RS-10: Write a C program to prompt for two strings and
concatenate them as shown in in the Python code below.
Use the functions strcpy and strcat from the string.h library in your code.
Pre-allocate your character arrays large enought to handle up to
100 characters on input for each string
(i.e. do not use malloc as we have not yet covered that yet).
*/

#include <stdio.h>
#include <string.h>
int main()
{
  printf("Enter two strings\n");
  char s[100];
  char t[100];
  char u[200];
  fgets(s, 100, stdin);
  fgets(t, 100, stdin);
  strcpy(u, s);
  u[strlen(s) -1] = ' ';
  u[strlen(s) ] = '&';
  u[strlen(s) + 1] = ' ';
  u[strlen(s) + 2] = '\0';

  strcat(u, t);
  printf("%s\n", u);
}
