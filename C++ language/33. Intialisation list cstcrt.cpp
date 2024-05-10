/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

class Test
{
    int a;
    int b;

public:
//  Test(int i, int j) : a(i), b(a + j) -> execute hojyga. 
//  Test(int i, int j) : b(j), a(i+b) -> ye glt h bcoz jo phele declare hua h wo phle intialise hoga, a phle intialize hoga a & a me b ka value define nhi hoga.
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
