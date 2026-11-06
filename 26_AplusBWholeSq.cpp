#include <iostream>
using namespace std;
int ABsq(int a , int b) {
    return a*a + b*b + 2*(a*b);
}
int main() {
    int num1, num2;
    cout<<"Enter the value of a"<<endl;
    cin>>num1;
    cout<<"Enter the value  of b"<<endl;
    cin>>num2;
    cout<<ABsq(num1, num2)<<endl;

}
