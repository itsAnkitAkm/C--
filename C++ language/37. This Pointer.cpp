#include<iostream>
using namespace std;
class A{
    int a;
    public:
       // A & setData(int a){
        void setData(int a){
            this->a = a;
        // return *this; //“this” pointer can be used to return a reference to the invoking object
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    A a;
    a.setData(4);
    //a.setData(4).getData();
    a.getData();
    return 0;
}
