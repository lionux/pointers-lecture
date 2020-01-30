#include<stdio.h>
int* generate_pointer(int x)
{
  int *i = &x;
  return i;
}

int main()
{
  int x = 32;
  int *j = generate_pointer(x);
  printf("&j: %p, j: %p, *j: %d\n",&j,j,*j);
  return 0;
}
