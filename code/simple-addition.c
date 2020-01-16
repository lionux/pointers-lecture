#include <stdio.h>
int main()
{
  int x = 3;
  int y = 4;
  int *i = &x;
  int *j = &y;
  int sum = *i + *j;
  printf("Sum of *i and *j: %d\n",sum);
  return 0;
}
