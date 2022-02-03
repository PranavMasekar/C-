#include<iostream>
using namespace std;
/*
syntax :- constructor (argument list) : initialization section
{
    code;
}
*/
class base
{
    int a;
    int b;
    public :
    base(int i, int j) : a(i) ,b(j)
    {
        cout<<"The value of a and b is "<<a<<" "<<b<<endl;
    }
};
int main(){
    base b(5,5);
    return 0;
}