#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
 // pointers 
 int a = 10;
 int *p;
 p = &a; // address of a is stored in p
 cout << "value of a: "<< a << endl;
 cout << "address of a: "<< &a << endl;

 printf("value of a using pointer: %d\n", *p); // dereferencing the pointer
 printf("address of a using pointer: %p\n", p); // address stored in pointer

// pointers to an array
 int arr[5] = {1, 2, 3, 4, 5};
 int *ptr = arr; // pointer to the first element of the array

 for(int i = 0; i < 5; i++)
 {
   printf("value of arr[%d]: %d\n", i, *ptr);
   ptr++; // move to the next element
 }
}