#include <iostream>
using namespace std;

// in a tail recursion the last statement is the function call
// it does not have to perform any operations at returning time.
void tail(int n)
{
  if (n>0)
  {
    cout<<"🐒 ["<<n<<"] -> ";
    tail(n-1);
  }
}

// while in a head recursion the very first statement is the function call
void head(int n)
{
  if (n>0)
  {
    head(n-1);
    cout<<"🐵 ["<<n<<"] -> ";
  }
}

int main()
{
  cout<<"tail: ";
  tail(5);
  cout<<"done"<<endl;
  cout<<"head: ";
  head(5);
  cout<<"done"<<endl;
}
