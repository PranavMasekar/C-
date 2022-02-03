#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "How are you ?";
    }
};

class base2
{
    void greet()
    {
        cout << "kaise ho ?";
    }
};
class derived : public base1, public base2
{
    int a;
    public :
   void greet()
   {
        base1 :: greet();
   }
};
int main()
{
    derived obj;
    obj.greet();
    return 0;
}