#include <stdio.h>

int main()
{

  int a[10], x;

  a[0] = 999;

  int *pa;
  pa = &a[0];

  x = *pa;

  printf("x:      %d  should be %d\n", x, 999);
  printf("a[0]:   %d  should be %d\n", a[0], 999);

  a[0] = 22;

  printf("x:      %d  should be %d\n", x, 999);
  printf("a[0]:   %d  should be %d\n", a[0], 22);
  printf("*pa     %d  should be %d\n", *pa, 22);

  a[1] = 33;
  printf("*(pa+1) %d  should be %d\n", *(pa + 1), 33);

  a[2] = 44;
  printf("*(pa+2) %d  should be %d\n", *(pa + 2), 44);

  int q;
  int *pq;
  q = 33;
  pq = &q;
  printf("*pq     %d  should be %d\n", *pq, 33);
  /*
  below is wrong -- i took a guess about *(pq + 1) for q being an int
  and was wrong
  */
  printf("*(pq+1) %d  should be %d\n", *(pq + 1), 34);
  printf("*(pq+2) %d  should be %d\n", *(pq + 2), 35);
  printf("*(pq+3) %d  should be %d\n", *(pq + 3), 36);
}