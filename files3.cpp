#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    ofstream out;
    out.open("sample2.txt");
    out<<"This is me";
    out.close();

    ifstream in;
    in.open("sample2.txt");
    string s;
    //in>>s;
    while(in.eof()==0)
    {
        getline(in,s);
         cout<<s<<endl;
    }
   
    in.close();
    return 0;
}