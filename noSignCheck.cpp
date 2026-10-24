#include <iostream>
using namespace std;

int main() {
 int num;
 cout<<"Enter the number: "<<endl;
 cin>>num;
 if(num == 0) {
    cout<<"The number is zero"<<endl;
 } 
 else if(num > 0) {
    cout<<"The enter number is positive"<<endl;

 } else {
    cout<<"The number is negative"<<endl;

 }
    return 0;
}