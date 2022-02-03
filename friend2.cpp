#include <iostream>
using namespace std;

class y; //Forward declaration of class y
class x
{
    friend void add(x, y); //Compiler wants a forward declaration of class y is present in below code.
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
};
class y
{
    friend void add(x, y);
    int num;

public:
    void setvalue(int value)
    {
        num = value;
    }
};
void add(x o1, y o2)
{
    cout << "summing data of two objects gives me " << o1.data + o2.num << endl;
}
int main()
{
    x a;
    a.setvalue(3);

    y b;
    b.setvalue(5);

    add(a, b);
    return 0;
}