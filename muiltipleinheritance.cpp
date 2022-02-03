#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void set1data(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set2data(int a)
    {
        base2int = a;
    }
};
class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "the value of base 1 is " << base1int << " the value of base 2 is " << base2int << endl;
    }
};

int main()
{
    derived harry;
    harry.set1data(55);
    harry.set2data(95);
    harry.show();
    return 0;
}
//The inherited class i.e derived class has two protected members i.e.base1int and base2int.
//The set1data and set2data are public member function. 