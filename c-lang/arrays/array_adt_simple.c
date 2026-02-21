#include <stdio.h>
#include <stdlib.h>

// helper functions
void swap(int *x, int*y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}
// ********************

struct Array
{
  int A[20];
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

void Append(struct Array *arr, int val)
{
  if(arr->length<arr->size)
    arr->A[arr->length++]=val;
}

void Insert(struct Array *arr, int idx, int x)
{
  if(idx>=0 && idx<=arr->length)
  {
    for(int i=arr->length; i>idx; i--)
      arr->A[i]=arr->A[i-1];
    arr->A[idx]=x;
    arr->length++;
  }
}

void Delete(struct Array *arr, int idx)
{
  int x = arr->A[idx];
  for(int i=idx; i<arr->length-1; i++)
    arr->A[i]=arr->A[i+1];
  arr->length--;
}

int LinearSearch(struct Array arr, int x)
{
  for(int i=0;i<arr.length;i++)
  {
    if (x==arr.A[i]) return i; 
  }
  return -1;
}

// Improvement in Linear Search approaches - 
// Transposition or Move to front/head

int TLinearSearch(struct Array *arr, int x)
{
  for(int i=0;i<arr->length;i++)
  {
    if (x==arr->A[i])
    {
      // transpostion
      swap(&arr->A[i],&arr->A[i-1]);
      // move to front/head
      // swap(&arr->A[i],&arr->A[0]);
      return i;
    }
  }
  return -1;
}



void SearchResult(struct Array arr,int val)
{
  int search_result = LinearSearch(arr,val);
  if (search_result==-1) printf("element not found!");
  else printf("element found at index: %d",search_result);
}


int main()
{
  struct Array arr = {{1,2,3,4},20,4};

  Append(&arr,5);
  Insert(&arr, 3, 10);
  Delete(&arr,3);
  Display(arr);

  printf("\n");

  SearchResult(arr,1);

  return 0;
}