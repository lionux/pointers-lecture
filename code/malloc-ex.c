#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  // get number of ints
  printf("Please enter number of integers: ");
  scanf("%d",&n);
  printf("\n");

  // allocate memory for n ints
  int *i = (int*)malloc(n*sizeof(int));

  // set index j to j
  for(int j = 0; j < n; j++)
  {
    printf("Please enter number %d: ",j);
    scanf("%d",&i[j]);
  }

  // print out the values
  for(int j = 0; j < n; j++)
  {
    printf("Value at index %d: %d\n", j, i[j]);
  }

  // free the memory back up
  free(i);
  return 0;
}
