#include <iostream>
using namespace std;

int main()
{
  int A[5];
  A[0]=12;
  A[1]=23;
  A[2]=44;
  A[3]=33;

  int B[3] = {2,3,4};
  int C[] = {1,2,2,2,2};
  int D[10] = {1,2};
  
  cout<<"size of A: "<<sizeof(A)<<endl;
  cout<<"size of B: "<<sizeof(B)<<endl;
  cout<<"size of C: "<<sizeof(C)<<endl;
  cout<<A[1]<<endl;
  printf("%d\n",A[2]);

  cout<<"size of D: "<<sizeof(D)<<endl;
  cout<<"elements of D: ";
  for(int i=0; i < 10; i++){
    cout<<D[i]<<" ";
  }
  cout<<endl;
  cout<<"as you can see, not assigning the values will make them zero"<<endl;

  cout<<"here is a foreach loop in cpp"<<endl;
  for(int x:A){
    cout<<x<<" ";
  }

  cout<<"last one might be a garbage value, since it was not initialized";
  cout<<endl;
  
  int n;
  cout<<"enter the size: ";
  cin>>n;
  int E[n];
  for (int x: E){
    cout<<x<<" ";
  }

  int k;
  cout<<"enter the another value: ";
  cin>>k;
  int F[k];
  cout<<endl<<"assign the values seperated by space or newline characters: "<<endl;
  for (int i=0; i<k; i++){
    cin>>F[i];
  }

  for(int x: F){
    cout<<x <<" ";
  }

  return 0;
}