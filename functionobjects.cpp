#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    //function wrapped in a class so thst it is available like an object.
    int arr[] = {1, 254, 3, 498, 5, 65, 7};
    //sort(arr , arr+7);   //ascending order
    sort(arr, arr + 7, greater<int>()); //descending order
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}