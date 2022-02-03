#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream hout("sample.txt");
    string name;
    name="My name is Pranav";
    hout<<name;
    hout.close();

    ifstream hin("sample.txt");
    string content;
    //hin>>content;
    getline(hin, content);
    cout<<content<<endl;
    hin.close();
    return 0;
}