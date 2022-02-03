#include<iostream>
using namespace std;

//float avg(int a, int b)
//{
//    float p;
//    p=(a+b)/2.0;
//    return p;
//}
//float avg2(int a, float b)
//{
//    float p;
//    p=(a+b)/2.0;
//    return p;
//}
template <class T1, class T2>
float avg(T1 a, T2 b)
{
    float p;
    p=(a+b)/2.0;
    return p;
}
int main(){
    float r;
    r=avg(5,2.4);
    cout<<r<<endl;
    return 0;
}