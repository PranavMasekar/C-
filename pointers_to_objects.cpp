#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void getdata()
    {
        cout << "the real part of complex number is " << a << endl;
        cout << "the imaginary part of complex number is " << b << "i" << endl;
    }
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
};
int main()
{
    complex c;
    complex *ptr = &c;
    // (*ptr).setdata(5,8);
    // (*ptr).getdata();
    //Arrow operator :- "->" used to derefernce a pointer.
    ptr->setdata(5, 5);
    ptr->getdata(); //Arrow opertaor is used to dereference the pointer ptr which is pointing to object c. You can access the function of objects by using arrow operator.
    return 0;
}
