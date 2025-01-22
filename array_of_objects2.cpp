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
    
    int n,i;
    cout<<"enter the number of employees"<<endl;
    cin>>n;
    Employee emp[n];
    //Accessing the function
    for(i=0;i<n;i++)
    {
        emp[i].getdata();
    }
    cout<<"employee data"<<endl;
    // accessing the function
    for ( i = 0; i < n; i++)
    {
        emp[i].putdata();
    }
    
    return 0;
}