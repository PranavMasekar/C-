#include <iostream>
using namespace std;

int main()
{
    int a, ans, even = 0, odd = 0;
    int b[100];
    cin >> a;
    for (int i = 0; i <= (a - 1); i++)
    {
        cin >> b[i];
        if (b[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    for (int j = 0; j <= (a - 1); j++)
    {
        if (even > odd)
        {
            if (b[j] % 2 != 0)
            {
                ans = j + 1;
                cout << ans;
            }
        }
        else
        {
            if (b[j] % 2 == 0)
            {
                ans = j + 1;
                cout << ans;
            }
        }
    }

    return 0;
}