#include <iostream>
using namespace std;
int main() {

    int n;
    cout<<"Enter the size of triangle"<<endl;
    cin>>n;
    bool c = true;
    for (int i = 1; i <=n; i++)
    {
        
        for (int j = 1; j <=i; j++)
        {
            cout<<c;
            c=!c;
        }
        cout<<endl;
        
    }
    

}