#include <iostream>
using namespace std;
/*
order of execution of constructor :- 
class b : public a
{

};
In this order of execution of constructor is base class a.

class a : public b, public c
{

};
In this order of execution of constructor is  base class b --> base class c--> class a

class a : public b , virtual public c
{

};
In this order of execution of constructor is virtual class c --> base class b --> class a.
*/
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base1 class constructor is called" << endl;
    }
    void printdata1(void)
    {
        cout << "The value of data is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base2 class contructor is called" << endl;
    }
    void printdata2(void)
    {
        cout << "The value of data is " << data2 << endl;
    }
};
class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void printdata3(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    derived harry(1, 2, 3, 4);
    harry.printdata1();
    harry.printdata2();
    harry.printdata3();
    return 0;
}