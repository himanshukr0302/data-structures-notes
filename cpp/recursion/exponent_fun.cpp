#include <iostream>
using namespace std;

int pow(int m,int n)
{
  if(n==0)
    return 1;
  return pow(m,n-1)*m;
}

int Opt_pow(int m,int n)
{
  if(n==0)
    return 1;
  if(n%2==0)
    return Opt_pow(m*m,n/2);
  else
    return m*Opt_pow(m*m,(n-1)/2);
}

int main()
{ int m=2,n=5;
  cout<<"value of "<<m<<"^"<<n<<" is: "<<pow(m,n)<<endl;
  cout<<"value of "<<m<<"^"<<n<<" is: "<<Opt_pow(m,n);
}