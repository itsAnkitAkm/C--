#include <bits/stdc++.h>
using namespace std;

class Calculator{
    protected:
   double a=0,b=0;
    public: 
    // Calculator(double x, double y){
    //     a=x;
    //     b=y;
    // }
    double add (){
        double  c;
        c= a+b;
        cout<<"The Sum of the two no. is="<<a+b<<endl;
        return (c);
    }
    double sub (){
         double  c;
        c= a-b;
        cout<<"The Diffrence of the two no. is="<<a-b<<endl;
        return (c);
    }
    double mul (){
        double  c;
        c= a*b;
        cout<<"The Product of the two no. is="<<a*b<<endl;
        return (c);
    }
    double div (){
        double  c;
        c= a/b;
        cout<<"The quotient of the two no. is="<<a/b<<endl;
        return (c);
    }

};

class Scintific : public Calculator {
      public:
      void sq(){
        double c;
          c=  sqrt(a);
          cout<<c<<endl;
          cout<<sqrt(b)<<endl;
      }
      void pw(){
        double c;
        c= pow(a,b);
        cout<<c<<endl;
      }
      void cq(){
        double c;
          c=  cbrt(a);
          cout<<c<<endl;
          cout<<cbrt(b)<<endl;
      }
      void ln(){
        cout<<log(a)<<","<<log(b)<<endl;
      }
};

class hybrid : public Scintific {
        int n;
        public:
        hybrid (double &x, double &y){
        a=x;
        b=y;
        }
    void work() {
        cout<<"Press 1 for Addition."<<endl;
        cout<<"Press 2 for Subtraction."<<endl;
        cout<<"Press 3 for Multiplition."<<endl;
        cout<<"Press 4 for Division."<<endl;
        cout<<"Press 5 for Square root."<<endl;
        cout<<"Press 6 for Power."<<endl;
        cout<<"Press 7 for Cube root."<<endl;
        cout<<"Press 8 for Log."<<endl;

        cin>>n;



        switch (n)
        {
        case 1:
          add();
            break;
        case 2:
            sub();
            break;
        case 3:
             mul();
            break;
        case 4:
             div();
            break;
        case 5:
            sq();
            break;
        case 6:
            pw();
            break;
        case 7:
            cq();
            break;
        case 8:
            ln();
            break;

        default:
            cout<<"Enter the right value"<<endl;
            break;
        }
    }
};

int main() {
    int i;
    do
    {
            
            double w,z;
            cout<<"Enter the two numbers:"<<endl;
            cin>>w>>z;
            hybrid l(w,z);

        l.work();
        cout<<"If want to continue press 1"<<endl;
        cin>>i;

    } while (i==1);
    

}