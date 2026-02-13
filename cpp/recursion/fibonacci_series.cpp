#include <iostream>
using namespace std;

// using loop
int ifib(int n)
{
  int t0=0,t1=1,s,i;
  if(n<=1) 
    return n;
  for(i=2;i<=n;i++)
  {
    s=t0+t1;
    t0=t1;
    t1=s;
  }
  return s;
}

// using recursion
int fib(int n)
{
  if (n<=1)
    return n;
  return fib(n-2)+fib(n-1);
}

// using memoization 
int F[10];
int mfib(int n)
{
  if(n<=1)
  {
    F[n]=n;
    return n;
  }
  else
  {
    if(F[n-2]==-1)
      F[n-2]=mfib(n-2);
    if(F[n-1]==-1)
      F[n-1]=mfib(n-1);
    
    F[n] = F[n-2]+F[n-1];
    return F[n];
  }
}

int main()
{
  // initializing global array with -1;
  for(int i=0;i<10;i++)
    F[i]=-1;
  cout<<"Loop: "<<ifib(7)<<endl;
  cout<<"Recursion: "<<fib(7)<<endl;
  cout<<"Memoisation: "<<mfib(7)<<endl;
}