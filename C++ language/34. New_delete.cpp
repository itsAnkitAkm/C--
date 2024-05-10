#include<iostream>
using namespace std;

int main(){


    float *p = new float(40.78);
    cout << "The value at address p is " << *p << endl;
    cout << "The address pointer of p is " << &p << endl;
    cout << "The address of memory allocated is " << p << endl;
    delete p;
    cout<<*p<<endl;
  
    int *arr = new int[3];
    *arr = 10;
    *(arr+1) = 50;
    arr[2] = 30;
   delete[] arr; // It will delete the memory allocated.
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
   
    return 0;
}
