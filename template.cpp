#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    int size;
    int *arr;
    vector(int m)
    {
        size = m;
        arr = new int[size];
    }
    int dotproduct(vector &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector <int> v1(3);
    v1.arr[0] = 4;
    v1.arr[0] = 3;
    v1.arr[0] = 2;

    vector <int> v2(3);
    v2.arr[0] = 3;
    v2.arr[1] = 2;
    v2.arr[2] = 1;

    int a = 0;
    a=v1.dotproduct(v2);
    cout << a << endl;
    return 0;
}