// a reference is basically another name given to a variable

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
  int a=10;
  int &r=a;
  cout<<"accessing value using variable: "<<a<<endl;
  cout<<"accessing value using reference: "<<r<<endl;

  r = 25;
  cout<<"accessing value using variable: "<<a<<endl;
  a = 23;
  cout<<"accessing value using reference: "<<r<<endl;

}
