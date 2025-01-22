#include<iostream>
using namespace std;
class test{
    public:
    int a,b;
    test() {
        cout<<"constructor is called"<<endl;
        a=1;
        b=2;
    };
    //destructor
    ~test()
    {
        cout<<"destructor is called"<<endl;
    }
    // function to print values of data members
    void show(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
int main(){
  //pointer to object
  test*ptr;
  //dynamic object creation
  ptr=new test;
  //accessing member through pointer to object
  ptr->show();
  //destroying the object dynamically
  delete ptr;  
    return 0;
}