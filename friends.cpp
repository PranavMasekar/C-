#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setnumber(int i1, int i2)
    {
        a = i1;
        b = i2;
    }
    friend complex sumcomplex(complex o1, complex o2); // Grants the permision to use private data
    void print()
    {
        cout << "your complex number is  " << a << "+" << b << "i"<<endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2,sum;
    c1.setnumber(1, 5);
    c2.setnumber(5, 6);
    c1.print();
    c2.print();
    sum= sumcomplex(c1,c2);//"= " is bcz sumcomplex is not a part of a class 
    sum.print(); 
    return 0;
}
/* properties of friend function
1.Not in the scope of class
2.since it is not in scope of class , it cant be called as object of class
3.can be declared in pubic or private function of class
4.It cant access the members directly by their names and need Object_name.member_name to access sny member.


*/