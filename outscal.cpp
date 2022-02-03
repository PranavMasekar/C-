#include<iostream>
using namespace std;

class p {
    public :
    void print()
    {
        cout<<"p"<<endl;
    }
};
class q : public p{
    public :
    void print()
    {
        cout<<"q"<<endl;
    }
};
class r :public q{

};
int main(){
    r a;
    a.print();
    return 0;
}