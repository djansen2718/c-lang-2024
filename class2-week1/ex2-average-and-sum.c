/*
LBS290 Exercise 8. This program will prompt for 5 floating point numbers. The program will print out the total of the five numbers and also print out the average.
Fun Fact:Dr. Chuck used this exact assignment while teaching C - in LBS 290 - Fall 1991.
*/

#include <stdio.h>
int main()
{
  int i;
  float nums[5];
  float sum = 0.0;
  for (i = 0; i < 5; i++)
  {
    scanf("%f", &nums[i]);
    sum += nums[i];
  }
  printf("The total is: %.1f\n", sum);
  printf("The average is: %.1f\n", sum / 5);
}