#include <iostream>
#include <stdio.h>
using namespace std;

// defining functions here 

// a function to add two numbers
int add(int a, int b)
{
    int c;
    c= a+b;
    return c;
}

// pass by address
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// pass by reference 
void swap2(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

// pass by both
void swap3(int &a, int *b)
{
    int temp;
    temp=a;
    a=*b;
    *b=temp;
}
int main()
{
   cout<<add(6,4)<<endl;
   int a=23,b=54;
   cout<<"Before swap: "<<"a= "<<a<<" ,b= "<<b<<endl;
   swap(&a,&b);
   cout<<"After swap: "<<"a= "<<a<<" ,b= "<<b<<endl;

   swap2(a,b);
   cout<<"After swap: "<<"a= "<<a<<" ,b= "<<b<<endl;

   swap3(a,&b);
   cout<<"After swap: "<<"a= "<<a<<" ,b= "<<b<<endl;
}