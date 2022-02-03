#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number() { a=0;}
    number(int num)
    {
        a = num;
    }
    number(number &obj)
    {
        cout<<"Copy constructor is called "<<endl; //when copy constructor is not formed compiler forms its own copy constructor
        a=obj.a;
    }
    void display()
    {
        cout << "The number is " << a << endl;
    }
};

int main()
{
    number x, y, z;
    x.display();
    number z1(x);//copy constructor is invoked.
    z1.display();
   
    number z3 = z;
    z3.display();//if object is formed and initialize at same time then copy constructor can be formed by the compiler
        return 0;
}