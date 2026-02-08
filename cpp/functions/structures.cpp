#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

// call by value
int area(Rectangle r1)
{
    return r1.length*r1.breadth;
}

// call by reference 
int area2(Rectangle &r1)
{
    r1.length++;
    return r1.length*r1.breadth;
}

// call by address
void modify(Rectangle* r, int l)
{
    r->length=l; 
}

// passing an array using structure
struct Test
{
    int A[5];
    int n;
};

void arr_pass(struct Test t1)
{
    t1.A[0]=12;
    t1.A[2]=827;
}

int main()
{
    Rectangle r = {1,2};
    cout<<"area of the rectangle is: "<<area(r)<<endl;

    Rectangle c = {1,2};
    cout<<"area of the rectangle is: "<<area2(c)<<endl;

    modify(&c,34);
    cout<<"area of the rectangle is: "<<area(c)<<endl;

    // arrays 
    Test t1 = {{1,2,2,3,4},5};
    arr_pass(t1);
    cout<<t1.A[0]<<endl;

}