#include <stdio.h>
int main()
{
  int x = 3;
  int *i = &x;
  int **j = &i;
  printf("&x: %p, x: %d\n", &x, x);
  printf("&i: %p, i: %p, *i: %d\n", &i, i, *i);
  printf("&j: %p, j: %p, *j: %p, **j: %d\n",
	 &j, j, *j, **j);
  return 0;
}
