
#include <stdio.h>
#include <stdlib.h>

/*
Simple Structures

You will write two function dealing with a simple strcuture as shown below. The first function will dump the internal values of the simpledate structure. The second will compute the day of the year similar to the sample code in Chapter 6 of the K&R book.
*/

int is_leap_year(d)
struct simpledate *d;
{
  return ((d->year % 4 == 0) && (d->year % 100 != 0 || d->year % 400 == 0));
}

int day_of_year(pd) /* set day of year from month, day */
struct simpledate *pd;
{
  int day_tab_index;
  if (is_leap_year(pd))
    day_tab_index = 1;
  else
    day_tab_index = 0;
  int count_of_days = 0;
  int month_index;
  for (month_index = 0; month_index < pd->month; month_index++)
  {
    count_of_days += day_tab[day_tab_index][month_index];
    // printf("count_of_days: %d\n day_tab_index: %d\n month_index: %d\n\n", count_of_days, day_tab_index, month_index);
  }
  count_of_days += pd->day;
  return count_of_days;
}

void dump_date(pd) /* print date from year, month, day */
    struct simpledate *pd;
{
  /* The date should be in the following format - note that */
  /* The month and day are always two digits with leading zeros */
  printf("%d/%02d/%02d\n", pd->year, pd->month, pd->day);
}

main()
{
  void dump_date();
  printf("Playing with structures\n");
  struct simpledate sd;

  sd.year = 2023;
  sd.month = 2;
  sd.day = 11;
  dump_date(&sd);
  printf("Day of year %d\n", day_of_year(&sd));

  sd.year = 2023;
  sd.month = 9;
  sd.day = 15;
  dump_date(&sd);
  printf("Day of year %d\n", day_of_year(&sd));

  sd.year = 2024;
  sd.month = 9;
  sd.day = 15;
  dump_date(&sd);
  printf("Day of year %d\n", day_of_year(&sd));
}