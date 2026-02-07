#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;

int main()
{
  // heap memory allocation in c lang
  cout<<"Output from c lang program:"<<endl;
  int *p;
  p=(int*)malloc(5*sizeof(int));

  p[0]=10; p[1]=21; p[2]=14; p[3]=12; p[4]=23;

  for(int i=0;i<5;i++)
    cout<<p[i]<<" ";

  free(p);
  p = NULL;
  cout<<endl;

  // heap memory allocation in c lang
  cout<<"Output from cpp program:"<<endl;
  int *ptr = new int[5];
  ptr[0]=10; ptr[1]=21; ptr[2]=14; ptr[3]=12; ptr[4]=23;

  for (int i=0; i<=sizeof(ptr); i++)
    cout<<ptr[i]<<" ";

  delete[] ptr;
  ptr = nullptr;


}