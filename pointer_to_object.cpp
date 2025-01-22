#include<iostream>
using namespace std;
class My_class {
    public:
    int num;
    void set_number(int value)
    {
        num=value+5;
    }
    void show_number();
};
void My_class ::show_number()
{
    cout<<num<<endl;
}
int main(){
    My_class object, *p;
    int a;
    cout<<"Enter the number you want to set"<<endl;
    cin>>a;
    object.set_number(a);
    object.show_number();
    p=&object;
    cout<<&object<<endl;
    p->show_number();
    return 0;
}