#include <iostream>
using namespace std;

int main()
{
    int n, trace;
    trace = 0;
    cin >> n;
    int arr[n][n];   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for (int g = 0; g < n; g++)
    {
        int a;
        a = arr[g][g];
        trace = trace + a;
    }
    cout << trace;
    return 0;
}