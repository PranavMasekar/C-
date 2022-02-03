/*
1)The main class is the base class
2)The inherited class is known as derived class

                ************************Types Of Inheritance************************

1)Multiple Inheritance:-(A derieved class with more than one base class)
2)single Inheritance :-(A derived class with only Base class)
3)Hierarchical inheritance :-(More than one derived classes from one base class)
4)Multilevel inheritance :-(A derived class from a already derived class)
5)Hybrid inheriyance :-(Combination of multiple and multilevel inheritance)

                **********************Syntax**************************
        class {{derived class name }} : {{visibilty mode }} {{base class name }}
        visibility mode :-1)private-->The public members of base class becomes private members in derived class.
                          2)public-->The public members of base class becomes public members in derived class.
                          *****You can not inherit private member of base class****
*/
#include <iostream>
using namespace std;

class employee
{ //base class
public:
    int id;
    float salary;
    employee(int x)
    {
        x = id;
        salary = 34;
    }
    employee() {}
};
class programmer : employee //The default visibility mode is private. class programmer : public employee
{
public:
    programmer(int y)
    {
        id = y;
    }
    int languagecode = 9;
    void getdata()
    {
        cout << id << endl;
    }
};
int main()
{
    employee rohan(1), harry(2);
    cout << rohan.salary << endl;
    cout << harry.salary << endl;
    programmer skill(10);
    cout << skill.languagecode << endl;
    skill.getdata();
    return 0;
}