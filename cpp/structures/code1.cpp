#include <iostream>
#include <cstring>
using namespace std;

typedef struct Rect {
  int length;
  int breadth;
} Rect;

typedef struct Student
{
  char name[20];
  int roll;
  int course_id[5];
  int classs;
} student;

int main(){
  Rect r;
  r.breadth = 29;
  r.length = 22;
  cout<<"area of the rectangle is : "<<r.breadth*r.length<<endl;

  student student1;

  strcpy(student1.name,"himanshu");
  student1.classs = 12;
  student1.roll = 12;

  int temp[5]={1,2,3,4,5};
  for(int i=0;i<5;i++)
      student1.course_id[i]=temp[i];

  cout<<student1.name<<endl;
  cout<<student1.classs<<endl;
  cout<<student1.roll<<endl;

  for(int i=0;i<5;i++)
      cout<<student1.course_id[i]<<" ";
}
