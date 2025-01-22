#include<iostream>
using namespace std;
class Demo {
    public:
    int a=10;
    float b=88;
    void mess(){
        cout<<"This is the dome of class ";
    }
    
    
};
int main() {
    Demo d1;
    cout<<"The value of a is "<<d1.a<<"\nThe value of b is "<<d1.b<<endl;
    d1.mess();


    return 0;
}