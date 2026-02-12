#include <iostream>
using namespace std;

int x=0;
// will have the same working as static variable

int fun_static(int n)
{
  // static int x=0;
  if (n>0)
  {
    x++;
    return fun_static(n-1)+x;
  }
  return 0;
}

int fun_global(int n)
{
  int y=0;
  if (n>0)
  {
    y++;
    return fun_global(n-1)+y;
  }
  return 0;
}


int main()
{
  int a=5;
  cout<<"static or global: "<<fun_static(a)<<" ";
  cout<<endl;
  cout<<"normal: "<<fun_global(a)<<" ";
}