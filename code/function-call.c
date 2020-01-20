#include <stdio.h>
int addOne(int x)
{
  x = x + 1;
  return x;
}

int addOne_by_pointer(int *x)
{
  *x = *x+1;
  return *x;
}
int main()
{
  int x = 1;
  int y = addOne(x);
  printf("x: %d, y: %d\n",x,y);

  int z = addOne_by_pointer(&x);
  printf("x: %d, z: %d\n",x,z);
  return 0;
}



