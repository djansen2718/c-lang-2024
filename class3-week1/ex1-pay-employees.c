/*
LBS290 Exercise 13. This program will read an un-specified number of employee time records from input.
Each time record will contain:
 an employee number (integer),
 an employee rate per hour (float)
 and number of hours worked.
You should give the employee time-and-a-half for overtime (hours over 40).
You must write a function named calcpay() to calculate the pay.
The function should have no return value and must not use any global variables.
The calculated pay should be passed out of the function using call by location.
Fun Fact:Dr. Chuck used this exact assignment while teaching C - LBS 290 - Fall 1991.
*/

void calcpay(p, r, h) float *p, r, h;
{
  float pay_regular_time, pay_overtime;
  float HOURS_REGULAR_TIME = 40.0;
  float RATE_FOR_OVERTIME = 1.5;
  if (h < 0.0)
  {
    *p = 0;
  }
  else if (h <= HOURS_REGULAR_TIME)
  {
    *p = r * h;
  }
  else
  {
    pay_regular_time = (HOURS_REGULAR_TIME)*r;
    pay_overtime = (h - HOURS_REGULAR_TIME) * r * RATE_FOR_OVERTIME;
    *p = pay_regular_time + pay_overtime;
  }
}

#include <stdio.h>
int main()
{
  int empno;
  float rate, hours, pay;
  void calcpay();

  while (1)
  {
    if (scanf("%d %f %f", &empno, &rate, &hours) < 3)
      break;
    calcpay(&pay, rate, hours);
    printf("Employee=%d Rate=%.2f Hours=%.2f Pay=%.2f\n", empno, rate, hours, pay);
  }
}