#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator i;
    for (i = lst.begin(); i != lst.end(); i++)
    {
        cout << *i << endl;
    }
}
int main()
{
    list<int> list1(5);
    list<int>::iterator iter;
    for (iter = list1.begin(); iter != list1.end(); iter++)
    {
        cin >> *iter;
    }
    list1.sort();
    display(list1);
    return 0;
}