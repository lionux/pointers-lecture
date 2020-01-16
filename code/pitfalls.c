#include <stdio.h>
int main()
{
  int x = 1;
  int *i = &x;
  printf("i: %p, *i: %d\n", i, *i);
  (*i)++;
  printf("i: %p, *i: %d\n", i, *i);
  return 0;
}
