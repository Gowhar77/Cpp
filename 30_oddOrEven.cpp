#include <iostream>
using namespace std;
bool iseven(int a) {
    if (a%2 == 0)
    {
        cout<<a<<" is even";
    }
    else {
        cout<<a<<" is odd"<<endl;
    }
    
}

int main() {
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    iseven(num);

}