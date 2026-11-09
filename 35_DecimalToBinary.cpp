#include <iostream>
using namespace std;
int dTb(int a) {
    int n;
    while (a>0)
    { 
        
        int lastDigit = a%2;
        a = a/2;
        while (a>0)
        {
          int lastDigit = a%2;
        a = a/2;
        }
        
    }


}
int main() {
    int num;
    cout<<"Enter the decimal number"<<endl;
    cin>>num;
    dTb(num);

}