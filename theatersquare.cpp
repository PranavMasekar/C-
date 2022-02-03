#include<iostream>
using namespace std;

int main(){
    long long int n,m,a,r,c,blocks;
    cin>>n>>m>>a;
    if(n%a==0)
    {
        r=n/a;
    }
    else
    {
        r=(n/a)+1;
    }
    if(m%a==0)
    {
        c=m/a;
    }
    else
    {
        c=(m/a)+1;
    }
   blocks=r*c;
   cout<<blocks;
    return 0;
}