#include <iostream>
using namespace std;


/*
fun(n)
{
  condition
    {
      ascending phase - execution during call 
      fun(n-1)
      descending phase - execution during return
    }
}
*/

void fun1(int n)
{
  if (n>0)
  {
   cout<<n<<" ";
   fun1(n-1);
  }
}

void fun2(int n)
{
  if (n>0)
  {
   fun2(n-1);
   cout<<n<<" ";
  }
}

int main()
{
  cout<<"output for fun1: "<<endl;
  fun1(5);

  cout<<endl;
  cout<<"output for fun2: "<<endl;
  fun2(5);
}