#include <iostream>
using namespace std;

class Rectangle
{
  private:
  // data members
  int length;
  int breadth;

  public:
  // default constructor
  Rectangle(){length=breadth=1;}

  // constructor overloading 
  // parameterized constructor
  Rectangle(int length, int breadth);

  // facilitators - functions that perform operations on the data members
  int area();
  int perimeter();

  // getter methods - accessors
  int get_length(){return length;}
  int get_breadth(){return breadth;}
  // setter methods - mutators
  void set_length(int l){length=l;}
  void set_breadth(int b){breadth=b;}

  // destructor
  // use when you need to release the heap memory 
  ~Rectangle();

};

// implementing the functions outside the class using scope resolution (::)

Rectangle::Rectangle(int l,int b)
{
  length=l;
  breadth=b;
}

int Rectangle::area()
{
  return length*breadth;
}

int Rectangle::perimeter()
{
  return 2*(length+breadth);
}

Rectangle::~Rectangle(){};

int main()
{
  Rectangle rect(10,5);
  
  cout<<"length: "<<rect.get_length()<<endl;
  cout<<"breadth: "<<rect.get_breadth()<<endl;

  cout<<"the area of rectangle is: "<<rect.area()<<endl;
  cout<<"the perimeter of rectangle is: "<<rect.perimeter()<<endl;

  rect.set_breadth(10);
  rect.set_length(20);

  cout<<"new dimensions are now: "<<endl;
  cout<<"length: "<<rect.get_length()<<endl;
  cout<<"breadth: "<<rect.get_breadth()<<endl;

  cout<<"thus new area is: "<<rect.area();
  cout<<"and new perimeter is: "<<rect.perimeter();


}