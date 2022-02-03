#include<iostream>
using namespace std;


    //new keyword
    //int *p= new int(40);        //dynamic integer
    //cout<<"The value at p is "<<*(p)<<endl;
    //int *arr=new int [3];
    //arr[0]=1;
    //arr[1]=2;
    //arr[2]=3;
    //cout<<"The value of array  is "<<arr[0]<<endl;
    //cout<<"The value of array is "<<arr[1]<<endl;
    //cout<<"The value of array is "<<arr[2]<<endl;
    //delete keyword
   // delete p;
    //cout<<"The value at p is "<<*(p)<<endl;
    
class baseclass
{
    public :
    int var_base;
    void display()
    {
        cout<<"Displaying base class variable "<<var_base<<endl;
    }
};
class derivedclass : public baseclass
{
  public :  
  int var_derived ;
  void display()
  {
      cout<<"Displaying base class variable "<<var_base<<endl;
      cout<<"Displaying derived class variable "<<var_derived<<endl;
  }
};
int main(){
    //Even we create a pointer of base class and point it to the object of derived class it will only run the member function of base class 
    //bcz it is a pointer of a base class
    baseclass * base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->var_base=10;
    base_class_pointer->display();
     return 0;

}