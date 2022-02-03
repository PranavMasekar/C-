#include <iostream>
using namespace std;
/*
template <class T1, class T2>
*/
template <class t1 = int, class t2 = float> //Template with default parameter :- template<class T1=int ,class T2=float>
class myclass
{
public:
    t1 data1;
    t2 data2;
    myclass(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << data1 << " " << data2 << endl;
    }
};
int main()
{
    myclass<> obj(1, 2.8);
    obj.display();
    return 0;
}