#include<iostream>
using namespace std;

int main(){
    int a,b;
    int count=0;
    cin>>a>>b;
   while(a%b !=0)
   {
       a++;
       count++;
   }
   cout<<count;
    return 0;
}