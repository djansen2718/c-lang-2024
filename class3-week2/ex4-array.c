/*
LBS290 Exercise 14. The program will create a 10 element array
and read in 10 integers into the array.
Then the program will print the integers backwards.
Then the program will scan for entries in the array
which contain the value 100 and print out the index
of the entries with the number 100.
The program will also count the number of entries which equal 100.
The program should work even if there are no entries which equal 100.
See the sample output for the expect format of the output.
Fun Fact:Dr. Chuck used this exact assignment while teaching C - LBS 290 - Fall 1991.
*/

/*
numb[9] = 77
numb[8] = 1
numb[7] = 100
numb[6] = 6
numb[5] = 20
numb[4] = 18
numb[3] = 16
numb[2] = 100
numb[1] = 5
numb[0] = 9

Searching for entries equal to 100

Found 100 at 2
Found 100 at 7

Found 2 entries with 100
*/

#include <stdio.h>
int main()
{
  int i, v, count_of_100, indexes_of_100[10], arr[10];
  for (i = 0; i < 10; i++)
  {
    scanf("%d", &v);
    arr[i] = v;
    if (v == 100)
    {
      indexes_of_100[count_of_100] = i;
      count_of_100++;
    }
  }
  for (i = 9; i >= 0; i--)
    printf("numb[%d] = %d\n", i, arr[i]);

  printf("\nSearching for entries equal to 100\n\n");
  i = 0;
  while (indexes_of_100[i])
  {
    printf("Found 100 at %d\n", indexes_of_100[i]);
    i++;
  }
  printf("\nFound %d entries with 100\n", count_of_100);
}