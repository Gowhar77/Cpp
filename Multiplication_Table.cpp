#include<iostream>
using namespace std;
int main()
{
    int a;
    int mult;
    int range;
    cout<<"Enter the number whose multiplication table you want to print"<<endl;
    cin>>mult;
    cout<<"Enter the range"<<endl;
    cin>>range;
    for (int a = 1; a <= range; a++)
    {
    
        cout<<mult*a<<endl;
    }
    
}