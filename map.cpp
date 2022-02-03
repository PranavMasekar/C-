#include <iostream>
#include <string>
#include <map>
using namespace std;
//map is an associative array.
int main()
{
    map<string, int> marksmap;
    marksmap["harry"] = 98;
    marksmap["Jack"] = 56;
    marksmap["rohan"] = 89;

    map<string, int>::iterator iter;
    for (iter = marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    return 0;
}