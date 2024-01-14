/*
LBS290 Exercise 15. You are to perform the following steps in a function named process():
(1) Print out the string you are passed.
(2) Count the number of characters in the string.
(3) If there are more than 10 characters in the string print out the 9th character.
(4) Go through the string and replace every blank with a dash '-' (5) Print out the new string with dashes.
Fun Fact:Dr. Chuck used this exact assignment while teaching C - LBS 290 - Fall 1991.
*/

/*
Expected Output:
String: Hi there and welcome to LBS290
Count=30
The ninth character is: a
String: Hi-there-and-welcome-to-LBS290

String: I love C
Count=8
String: I-love-C
*/

#include <stdio.h>
#include <string.h>
int main()
{
  char line[1000];
  void process();
  strcpy(line, "Hi there and welcome to LBS290");
  process(line);
  strcpy(line, "I love C");
  process(line);
}

void process(line) char line[];
{
  int length = (int)strlen(line);
  printf("\nString: %s\n", line);
  printf("Count=%d\n", length);
  if (length > 10)
  {
    printf("The ninth character is: %c\n", line[9]);
  }
  printf("");
  int i;
  for (i = 0; i < length; i++)
  {
    if (line[i] == ' ')
    {
      line[i] = '-';
    }
  }
  printf("String: %s\n", line);
}
