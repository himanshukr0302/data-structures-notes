#include<iostream>
#include<stdlib.h>
using namespace std;

// arrays can only be passed by address
void fun(int A[]/*can also be written as int *A */, int size)
{
    cout<<"ur array: ";
    for(int i=0;i<size;i++)
        printf("%d ",A[i]);
    cout<<endl;
}

// for specific pointers for arrays only use A[] else A*

void modify(int A[],int n){
    A[0] = n;
}

// returning array as a parameter 
int* fun3(int n)
{
    int *p;
    p=(int*)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++)
        p[i]=i+1;
    return(p);
    delete(p);
}

int main()
{
   int A[4]={1,2,2,3};
   int n = sizeof(A)/sizeof(int);
   cout<<n<<endl;
   fun(A,n);
   modify(A,34);
   fun(A,n);

   int k=4;
   int *B = fun3(k);
   fun(B,k);

}