#include <iostream>
using namespace std;

class shop
{
    int id, price;

public:
    void setdata(int a, int b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "The id of item is " << id << endl;
        cout << "The price of item is " << price << endl;
    }
};

int main()
{
    shop *ptr = new shop[2];
    shop *ptrtemp = ptr;
    int p,q;
    for ( int i = 0; i <2 ; i++)
    {
       cout<<"Enter the id and price of item is "<<endl;
       cin>>p>>q;
       ptr->setdata(p,q);
       ptr++;
    }
    for (int i = 0; i < 2; i++)
    {
        ptrtemp->getdata();
        ptrtemp++;
    }
    
    
    return 0;
}