#include <iostream>
using namespace std;

class base
{ //I want to inherit int a.
protected:
    int a;

private:
    int b;
};
class derived ::public base{

};

int main()
{
 base b;
 derived d;
 //cout<<d.a<<b.a; will not work
    return 0;
}
/*
For a protected member:-
                            Public mode         Private mode        Protected mode
    1.PRIVATE   Member      Not inherited       Not inherited       Not inherited
    2.PROTECTED Member      protected           Private             Protected
    3.PUBLIC    Member      Public              Private             Protected
*/