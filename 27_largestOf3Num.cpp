#include <iostream>
using namespace std;
int larg(int a, int b, int c) {
      if (a>b && a>c)
      {
        cout<<a<<" num1 is largest"<<endl;
      }
      else if (b>a && b>c)
      {
        cout<<b<<" num2 is largest"<<endl;
      } else {
        cout<<c<<" num3 is largest"<<endl;
      }
      
      
    }
      


int main() {
  int num1,num2,num3;
  cout<<"Enter the first number"<<endl;
  cin>>num1;
  cout<<"Enter the second number"<<endl;
  cin>>num2;
  cout<<"Enter the third number"<<endl;
  cin>>num3;
  larg(num1,num2,num3);



}