#include <stdio.h>

void add_one(int var)
{
  var++;
  printf("var in add_one: %d\n",var);
}

void add_one_pointer(int *var)
{
  printf("var in add_one_pointer: %d\n",*var);
  (*var)++;
  printf("var in add_one_pointer after inc: %d\n",*var);
}

int main()
{
  int var = 100;
  printf("var: %d\n",var);

  printf("address of var: %p\n",&var);

  int var2 = 3;
  printf("var2 before function call: %d\n",var2);
  add_one(var2);
  printf("var2 after function call: %d\n",var2);
  add_one_pointer(&var2);
  printf("var2 after point function call: %d\n",var2);

  return 0;
}
