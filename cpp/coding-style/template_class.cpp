#include<iostream>
using namespace std;

// non-generic class
/*
class Arithemetic
{
  private:
  int a;
  int b;

  public:
  Arithemetic(int a, int b);
  int add();
  int sub();
};

Arithemetic::Arithemetic(int a, int b)
{
  this->a=a;
  this->b=b;
}

int Arithemetic::add()
{
  int c;
  c = a+b;
  return c; 
}

int Arithemetic::sub()
{
  int c;
  c = a-b;
  return c;
}
*/

// generic class - also called template class

template <class T>
class Arithemetic
{
  private:
  T a;
  T b;

  public:
  Arithemetic(T a,T b);
  T add();
  T sub();
};

template <class T>
Arithemetic<T>::Arithemetic(T a, T b)
{
  this->a=a;
  this->b=b;
}

template <class T>
T Arithemetic<T>::add()
{
  T c;
  c = a+b;
  return c; 
}

template <class T>
T Arithemetic<T>::sub()
{
  T c;
  c = a-b;
  return c; 
}

int main()
{
  // for integers
  Arithemetic<int> arr(2,4);
  cout<<"sum of integers: "<<arr.add()<<endl;
  cout<<"sub of integers: "<<arr.sub()<<endl;

  // for floats
  Arithemetic<float> arr2(2.33,4.12);
  cout<<"sum of floats: "<<arr2.add()<<endl;
  cout<<"sub of floats: "<<arr2.sub()<<endl;

  // for doubles
  Arithemetic<double> arr3(2.92392,0.23324);
  cout<<"sum of doublesy: "<<arr3.add()<<endl;
  cout<<"sub of doubles: "<<arr3.sub()<<endl;

}