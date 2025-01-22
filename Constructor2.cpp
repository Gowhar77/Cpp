#include<iostream>
using namespace std;
class student

{
    int rno;
    char name[50];
    double fee;
    public:
    student();
    void display();
    
    
};
 student::student()
    {
        cout<<"Enter the roll number"<<endl;
        cin>>rno;
        cout<<"Enter the name"<<endl;
        cin>>name;
        cout<<"Enter the fee"<<endl;
        cin>>fee;

    }
    void student:: display()
    {
        cout<<endl<<"roll no. is"<<rno<<endl<<"name is "<<name<<endl<<"fee is "<<fee<<endl;
    }
int main(){
    student s1,s2;
    s1.display();
    s2.display();
    return 0;
}