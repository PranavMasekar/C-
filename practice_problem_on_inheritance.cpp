#include <iostream>
#include <cmath>
using namespace std;

class simple
{
    int a, b;
    int c;

public:
    void setdata()
    {
        cout << "Enter the value of two numbers " << endl;
        cin >> a >> b;
    }
    void operation()
    {
        c = a + b;
        cout << "the addition of two numbers is " << c << endl;
        c = a - b;
        cout << "the substration of two numbers is " << c << endl;
        c = a / b;
        cout << "the division of two numbers is " << c << endl;
        c = a * b;
        cout << "the multiplication of two numbers is " << c << endl;
    }
};

class scientific
{
    float a, b;
    float c;

public:
    void setdataangle()
    {
        cout << "Enter the angels  " << endl;
        cin >> a >> b;
    }
    void operationangle()
    {
        c=cos(a);
        cout << "the cosine of a  is " << c << endl;
        c=cos(b);
        cout << "the cosine of b  is " << c << endl;
        c=sin(a);
        cout << "the sine of a  is " << c << endl;
        c=sin(b);
        cout << "the sine of b  is " << c << endl;

    }
};
class hybrid : public simple , public scientific
{

};
int main()
{
   hybrid calc;
   calc.setdataangle();
   calc.operationangle();
   calc.setdata();
   calc.operation();
    return 0;
}