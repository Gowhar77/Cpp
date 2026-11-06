#include <iostream>
using namespace std;
int product(int a, int b) {
    return a*b;

}

int main() {
    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<product(num1,num2)<<endl;
}