#include<iostream>
using namespace std;
class Employee {
        public:
        int id;
        char name[30];
        void getdata(); //declaration of function
        void putdata(); // declaration of function

    };
    void Employee ::getdata() {
        cout<<"Enter the id of employee"<<endl;
        cin>>id;
        cout<<"Enter the name"<<endl;
        cin>>name;
    }
    void Employee ::putdata() {
        cout<<"Employee id is"<<id<<endl;
        cout<<"Employee name is "<<name<<endl;
        
    }
int main(){
    Employee emp;
    emp.getdata();
    emp.putdata();
    return 0;
}