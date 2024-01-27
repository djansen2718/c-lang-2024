#include <stdio.h>
#include <string.h>
#define HASH_SIZE 10

int hasherize(s)
char *s;
{
  int i;
  int hashing_sum;
  for (hashing_sum = 0; *s != '\0';)
  {
    printf("in the for loop\n");
    printf("*s: %c\n", *s);
    printf("before hashing_sum: %d\n", hashing_sum);
    hashing_sum += *s++;
    printf("after hashing_sum: %d\n", hashing_sum);
  }
  return hashing_sum % HASH_SIZE;
}
int main()
{
  int hash1 = hasherize("ABC");
  printf("expected hash1: 65 mod 10 = 5\n");
  printf("actual   hash1:          %d\n", hash1);
}