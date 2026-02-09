#include <iostream>
using namespace std;

class Rectangle
{
  private:
  int length;
  int breadth;

  public:
  Rectangle(int length, int breadth)
  {
    this->length=length;
    this->breadth=breadth;
  }

  void change_length(int l)
  {
    this->length=l;
  }

  int area()
  {
    return length*breadth;
  }

  // getter
  int get_length()
  {
    return this->length;
  }
  
};

int main()
{
  Rectangle rect(2,4);
  cout<<"the length of the rectangle is: "<<rect.get_length()<<endl;
  cout<<"the area of the rectangle is: "<<rect.area()<<endl;
}