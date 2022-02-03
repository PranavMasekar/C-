#include <iostream>
using namespace std;

class bankdeposite
{
    int principle;
    int years;
    float rate;
    float final;

public:
    bankdeposite(){}      //blank constructor 
    bankdeposite(int p, int y, float r);
    bankdeposite(int p, int y, int r);
    void show();
};
bankdeposite ::bankdeposite(int p, int y, float r)
{
    principle = p;
    years = y;
    rate = r;
    final = principle;
    for (int i = 0; i < y; i++)
    {
        final = final * (1 + r);
    }
}
bankdeposite ::bankdeposite(int p, int y, int r)
{
    principle = p;
    years = y;
    rate = float(r) / 100;
    final = principle;
    for (int i = 0; i < y; i++)
    {
        final = final * (1 + rate);
    }
}
void bankdeposite ::show()
{
    cout<<"Principle amount is "<<principle<<" final amount is "<<final<<endl;
}
int main()
{
    bankdeposite  b1,b2,b3;
    int p,y;
    float r;
    int R;
    cout<< "enter the value ";
    cin>>p>>y>>r;
    b1 = bankdeposite(p,y,r);
    b1.show();
    cout<<"enter the values in percentage";
    cin>>p>>y>>R;
    b2 = bankdeposite(p,y,r);
    b2.show();

    return 0;
}