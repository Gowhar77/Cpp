#include <iostream>
#include <cmath>
using namespace std;

int main() {
do
{
    int num1, num2;
    char op;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"Enter the operation you want to perform ,+,-,*,/"<<endl;
    cin>>op;
    switch (op)
    {
        int result;
    case '+':
        result = num1 + num2;
        cout<<"The addition of two numbers is : "<<result<<endl;
        break;
    case '-':
        result = num1 - num2;
        cout<<"The subtraction of two numbers is : "<<result<<endl;
        break;
    case '*':
        result = num1 * num2;
        cout<<"The multiplication of two numbers is : "<<result<<endl;
        break;
    case '/':
        result = num1 / num2;
        cout<<"The division of two numbers is : "<<result<<endl;
        break;
    default:
        cout<<"Invalid operation symbol"<<endl;
        break;
    }
cout<<" "<<endl;
} while (true);


    return 0;
}