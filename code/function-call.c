#include <stdio.h>
int add_one_by_value(int x)
{
  x = x + 1;
  return x;
}

int add_one_by_reference(int *x)
{
  *x = *x+1;
  return *x;
}
int main()
{
  int x = 1;
  int y = add_one_by_value(x);
  printf("x: %d, y: %d\n",x,y);

  int z = add_one_by_reference(&x);
  printf("x: %d, z: %d\n",x,z);
  return 0;
}



