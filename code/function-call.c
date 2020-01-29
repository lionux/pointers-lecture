#include <stdio.h>
int addOne(int x)
{
  x = x + 1;
  return x;
}

int addOnePointer(int *x)
{
  *x = *x + 1;
  return *x;
}

int main()
{
  int x = 1;
  int a = addOne(x);
  printf("x: %d, a1: %d\n",x,a);

  int b = addOnePointer(&x);
  printf("x: %d, a2: %d\n",x,b);
  return 0;
}



