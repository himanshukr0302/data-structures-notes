#include <stdio.h>
#include <stdlib.h>

struct Array
{
  int *A;
  int size;
  int length;
};

void Display(struct Array arr)
{
  int i;
  printf("Elements of the array are: \n");
  for(i=0;i<arr.length;i++)
    printf("%d ",arr.A[i]);
}

int main()
{
  struct Array arr;
  printf("Enter size of an array: ");
  scanf("%d",&arr.size);
  arr.A = (int*)malloc(arr.size*sizeof(int));
  arr.length = 0;
  int n;
  printf("Enter number of elements to insert: ");
  scanf("%d",&n);
  
  printf("Enter all elements here\n");
  for(int i=0;i<n;i++)
  {
    printf("Element [%d]: ",i);
    scanf("%d",&arr.A[i]);
    arr.length++;
  }

  Display(arr);
  return 0;
}