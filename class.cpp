#include <iostream>
using namespace std;
class shop
{
    int itemid[10];
    int itemprice[10];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};
void shop ::setprice(void)
{
    cout << "Enter the Id of your product" << endl;
    cin >> itemid[counter];
    cout << "Enter the Price of your Product " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of your item  " << itemid[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    shop Radhesham;
    Radhesham.initcounter();
    Radhesham.setprice();
    Radhesham.displayprice();
    return 0;
}