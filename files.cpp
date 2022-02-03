#include <iostream>
#include <fstream>
//Useful classes in c++:-
//1)fstreambase
//2)ifstream --->derived from fstreambase
//3)ofstream --->derived from fstreambase
//In order to work with tyhe files , you will have to open it and there are two ways to open a file
// 1. using a constructor
// 2. using member function open() of the class

using namespace std;

int main()
{
    string s1 = "Dron OP"; //This ofstream code is used to write the file means to do changes in files
    string s2;
    //opening with constructor and writing it
    //ofstream out("sample.txt");  //writing the file
    // out<<s1;

    ifstream in("sample2.txt"); //reading the file
    // in >> s2;                //this is done to store content of sample 2 in string s2 but it only prints first word and does not consider spaces and end line.
    getline(in, s2);            //Used to diplay a whole line of a file.
    cout << s2;
    return 0;
}