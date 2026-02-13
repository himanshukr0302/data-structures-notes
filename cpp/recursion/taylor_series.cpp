#include <iostream>
using namespace std;

double e(int x,int n)
{
  static double p=1,f=1;
  double r;
  if(n==0)
    return 1;
  else
  {
    r = e(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
  }
}

// using horner's rule
// recursion
double hr_e(int x,int n)
{
  static double s=1;
  if (n==0)
    return s;
  s=1+x*s/n;
  return hr_e(x,n-1);
}

//loop
double e_loop(double x, int n)
{
  double s = 1;
  double num = 1;
  double den = 1;

  for(int i = 1; i <= n; i++)
  {
    num *= x;     // x^i
    den *= i;     // i!
    s += num / den;
  }
  return s;
}

int main()
{
  int a=3,b=10;
  cout<<"taylor series for: "<<e(a,b)<<endl;
  cout<<"taylor series for: "<<hr_e(a,b)<<endl;
  cout<<"taylor series for: "<<e_loop(a,b)<<endl;
}