#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, temp, dig, power;
    cout<<"ENTER ACCOUNT NUMBER\n";
    cin >> num;
    num = num%10000;
    for(int i = 3; i>=0; i--)
    {
        temp = num;
        power = pow(10, i);
        temp = temp/power;
        cout << temp%10<< "\t";
    }
    return 0;
}