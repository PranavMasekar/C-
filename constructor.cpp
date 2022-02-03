#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    //constructor
    complex(void);    //declaration
    void print()
    {
        cout << "your complex number is " << a << "+" << b << "i" << endl;
    }
};
complex ::complex(void)
{                      //initialization
    a = 10;
    b = 0;
}
int main()
{
    complex c;
    c.print();
    return 0;
}

/*
   1. The constructor who doesnt take any parameter is known as default contructor
   2.It should be declare in public section of class
   3.They are automatically invoked whenever the object is declared
   4. Dont have any return type
   5.We can not refer to their address.
*/