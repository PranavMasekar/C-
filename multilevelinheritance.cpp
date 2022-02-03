#include <iostream>
using namespace std;

class student
{
protected:
    int roll;

public:
    void setnumber(int);
    void getnumber(void);
};
void student ::setnumber(int r)
{
    roll = r;
}
void student ::getnumber(void)
{
    cout << "The roll number is " << roll << endl;
}
class exam : public student
{
protected:
    float maths, physics;

public:
    void setmarks(float, float);
    void getmarks(void);
};
void exam ::setmarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam ::getmarks()
{
    cout << "The marks in maths and physics are " << maths << " " << physics << endl;
}
class result : public exam
{
    float per;

public:
    void display()
    {
        getnumber();
        getmarks(); 
        cout << "your percentage is " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    result harry;
    harry.setnumber(420);
    harry.setmarks(90.0, 90.0);
    harry.display();
    return 0;
}