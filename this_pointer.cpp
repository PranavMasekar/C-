#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setdata(int a)
    {
        this->a = a;
    }
    void getdata()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setdata(4);
    a.getdata();
    return 0;
}
//this is keyword which is a pointer which points to the object which invokes the member function. In this example this is pointing to a object.