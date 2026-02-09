#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
  int length;
  int breadth;
};

void initialize(struct Rectangle *rect, int l, int b)
{
  rect->length=l;
  rect->breadth=b;
}

void change_length(struct Rectangle *p,int l)
{
  p->length=l;
}

int area(struct Rectangle p)
{
  return p.length*p.breadth;
}

int main()
{
  struct Rectangle rect;
  initialize(&rect,23,23);
  printf("The area of normal rectangle is: %d\n",area(rect));
  change_length(&rect,50);
  printf("The area of modified rectangle is: %d\n",area(rect));
}