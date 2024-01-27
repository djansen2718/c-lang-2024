#include <stdio.h>

struct point
{
  double x;
  double y;
};

struct three_d_pt
{
  double x;
  double y;
  double z;
};

int main()
{
  struct point pt, *ppt;
  printf("sizeof(pt): %lu\n", sizeof(pt));
  printf("sizeof(ppt): %lu\n", sizeof(ppt));
  printf("sizeof(&pt): %lu\n", sizeof(&pt));
  printf("sizeof(*ppt): %lu\n", sizeof(*ppt));
  printf("\n\n\n");
  printf("sizeof(pt): %ld\n", sizeof(pt));
  printf("sizeof(ppt): %ld\n", sizeof(ppt));
  printf("sizeof(&pt): %ld\n", sizeof(&pt));
  printf("sizeof(*ppt): %ld\n", sizeof(*ppt));
  printf("\n\n\n");
  struct three_d_pt tdpt, *ptdpt;
  printf("sizeof(tdpt): %ld\n", sizeof(tdpt));
  printf("sizeof(ptdpt): %ld\n", sizeof(ptdpt));
  printf("sizeof(&tdpt): %ld\n", sizeof(&tdpt));
  printf("sizeof(*ptdpt): %ld\n", sizeof(*ptdpt));
  printf("\n\n\n");
  printf("sizeof(struct point): %ld\n", sizeof(struct point));
  printf("sizeof(struct three_d_pt): %ld\n", sizeof(struct three_d_pt));
}