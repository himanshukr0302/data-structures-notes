#include <iostream>
using namespace std;

int using_formula(int n)
{
  return n*(n+1)/2;
}

int using_loop(int n)
{
  int sum=0;
  for(int i=1; i<=n; i++)
   sum += i; 
  return sum;
}

int using_recursion(int n)
{
  if (n==0)
  {
    return 0;
  }
  return using_recursion(n-1)+n;
}

int main()
{
  cout<<"using formula: "<<using_formula(5)<<endl;
  cout<<"Iterative sum: "<<using_loop(5)<<endl;
  cout<<"Recursive sum: "<<using_recursion(5)<<endl;
}