#include <stdio.h>
int main()
{
  int x = 3;
  int *i = &x;
  int *j = i;
  // What will be the values of &x, i, and j?
  printf("&x: %p, i: %p, j: %p\n", &x, i, j);

  int y = *i + *j;
  // What will y be?
  printf("y: %d\n", y);

  int z = *i * *j;
  // What will z be?
  printf("z: %d\n", z);

  *i = 4;
  // What will *i, *j, and x be?
  printf("*i: %d, *j: %d, x: %d\n", *i, *j, x);

  return 1;
}
