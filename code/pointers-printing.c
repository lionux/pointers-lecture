#include <stdio.h>
int main()
{
  int *i;
  int x = 32;
  printf("&x: %p, x: %d\n\n", &x, x);
  i = &x;
  printf("&i: %p, i: %p, *i: %d\n",&i, i, *i);
  return 0;
}
