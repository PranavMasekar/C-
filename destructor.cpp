#include <iostream>
using namespace std;
int count = 0;
//destructor never takes any argument nor return any value
class num
{
public:
    num()
    {
        count++;
        cout <<"The constructor called "<<count<<endl;
    }
    ~num()
    {
        cout<<"The count for destructor"<<count<<endl;
        count--;
    }
};
int main()
{
    num n1;
    {
        cout<<"creating the two more objects"<<endl;
        num n2,n3;
        
    }
    return 0;
}