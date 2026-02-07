#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct Rectangle
{
  int l;
  int b;
};

int main()
{
  struct Rectangle r = {2,3};
  struct Rectangle *p=&r;

  // novice syntax
  r.l = 12;
  cout<<r.l<<endl;
  (*p).l = 23;
  cout<<r.l<<endl;

  // standard syntax
  p->l= 11;
  cout<<r.l<<endl;

  // creating an object dynamically
  struct Rectangle *P;
  P = (struct Rectangle*)malloc(sizeof(struct Rectangle));

  P->l=12;
  P->b=23;
  cout<<"area of heap rectangle: "<<P->l*P->b<<endl;
}