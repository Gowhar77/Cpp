#include<iostream>
using namespace std;
struct Employee
{
    int Empl_Id;
    char name[20];
    int ph;
};
int main() {
    Employee e1;
    e1.Empl_Id=1;
    e1.ph=0006;
    cout<<"Enter your name\n";
    cin>>e1.name;
    cout<<"Employee id of employee e1="<<e1.Empl_Id<<endl;
    cout<<"Employee name of emplouee e1="<<e1.name<<endl;
    cout<<"Employuee phone name is "<<e1.ph<<endl;
    




    return 0;

}