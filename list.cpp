#include <iostream>
#include <list>
using namespace std;
//insertion and deletion faster----> list
//faster accesss -----> array or vector
//list1.pop_back(); ----> Will remove a element from back.
//list1.pop_front(); ----> Will remove a element from front.
//list1.remove(5); ------> Will remove 5 from list.
//list1.sort(); -------> Will sort the given list.
//list1.merge(list2); -----> Will merge two list.
//list1.reverse(); -----> Will reverse a list.

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
    list<int> list1;    //list of zero length
    list<int> list2(3); //list of size 5

    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(7);

    //list<int>::iterator iter;
    //iter = list1.begin();
    //cout << *iter << endl;
    //iter++;
    //cout << *iter << endl;
    //iter++;
    //cout << *iter << endl;

    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 2;
    iter++;
    *iter = 3;
    iter++;
    *iter = 4;

    display(list2);
    // display(list1);
    return 0;
}