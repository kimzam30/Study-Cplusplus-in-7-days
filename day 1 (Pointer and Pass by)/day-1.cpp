#include <iostream>
using namespace std;

void swapNumbers(int* ptrA, int*ptrB){
   int temp= *ptrA;
   *ptrA=*ptrB;
   *ptrB=temp;
}

int main(){
   int A, B;
// user enter two integers
   cout <<"Enter integer A";
   cin >> A;
   cout <<"Enter integer B";
   cin >> B;


// print initial value
  cout <<"Before swap"<<endl;
  cout <<"A: "<< A <<endl;
  cout <<"B: "<< B <<endl;

// swap function
  swapNumbers(&A, &B);

// print swapped value
  cout <<"After swap"<<endl;
  cout <<"A: "<< A <<endl;
  cout <<"B: "<< B <<endl;

  return 0;
}