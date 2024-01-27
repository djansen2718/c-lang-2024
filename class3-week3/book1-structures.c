#include <stdio.h>

struct date
{
  int day;
  int month;
  int year;
  int yearday;
  char month_name[4];
};

void print_date(dt) struct date dt;
{
  printf("%d-%d-%d is the %d day of year %d\n", dt.year, dt.month, dt.day, dt.yearday, dt.year);
}

int main()
{

  struct date today;
  today.day = 14;
  today.month = 1;
  today.year = 2024;
  today.yearday = 14;
  // today.month_name = "Jan";
  print_date(today);

  struct date d = {14, 7, 1776, 186, "Jul"};
  print_date(d);
}