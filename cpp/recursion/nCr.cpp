#include <iostream>
using namespace std;

// using formula
int fact(int n)
{
  if (n==0) return 1;
  return fact(n-1)*n;
}

int nCr(int n,int r)
{
  int num,den;

  if(r > n ||  r < 0) return 0;
  num = fact(n);
  den = fact(r)*fact(n-r);
  return num/den;
}

// using pascal triangle
int NCR(int n, int r)
{
  if(r > n ||  r < 0) return 0;

  if (n==0 || n==r)
    return 1;

  return NCR(n-1,r-1)+NCR(n-1,r);
}


int main()
{
  int a=4,b=3;
  cout<<"Combination of "<<a<<"C"<<b<<" using usual method: "<<nCr(a,b)<<endl;

  cout<<"Combination of "<<a<<"C"<<b<<" using pascal traingle method: "<<NCR(a,b)<<endl;
}