/*Containers :- 
        Three Types
        1)sequence  :- Stores in linear fashion EX: vector, List,Dequeue.
        2)associative :-Provides faster access to variable or element(Direct access) EX: map,set.
        3)Derived  :-Derived from 1 and 2. Real world Modeling.EX: stack,queue.
*/
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<endl;
    }
}
int main()
{
    vector <int> vec1;
    int element;
    for(int i=0;i<4;i++)
    {
        cout<<"Enter the element ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vector<int> ::iterator iter=vec1.begin();
    vec1.insert(iter,566);//adds element inside vector 
    display(vec1);
    return 0;
}