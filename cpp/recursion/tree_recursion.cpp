#include <iostream>
using namespace std;

void tree(int n)
{
  if(n>0)
  {
    cout<<"branch: "<<n<<endl;
    tree(n-1);
    tree(n-2);
  }
}

int main()
{
  tree(5);
}