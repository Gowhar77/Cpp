#include<iostream>
using namespace std;
struct sum
{
    int a;
    int b;
    int c=a+b;
};

int main(){
    sum s1;
    s1.a=5;
    s1.b=5;
    cout<<"sum is "<<s1.c<<endl;
    
    return 0;
}