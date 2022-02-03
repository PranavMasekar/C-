#include <iostream>
using namespace std;

//foraward declaration
class complex; //initialize the  class

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumreal(complex, complex); // initailizing the fuction
};
class complex
{
    int a, b;
    // indivisually declaring friend function
    friend int calculator ::sumreal(complex, complex);
    // if we have to declare the whole class as friend the 
   //s+ friend class calculator;

public:
    void setnumber(int i1, int i2)
    {
        a = i1;
        b = i2;
    }

    void print()
    {
        cout << "your complex number is  " << a << "+" << b << "i" << endl;
    }
};
int calculator ::sumreal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int main()
{
    complex o1, o2;
    o1.setnumber(1, 5);
    o2.setnumber(2, 5);
    calculator calc;
    int res = calc.sumreal(o1, o2);
    cout << "the sum of the real part of complex number is " << res << endl;
    return 0;
}