#include <iostream>
using namespace std;
int main() {
 int n;
    cout<<"The the number of rows/colums for the pyramid"<<endl;
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        char c='A';
        for (int j = 1; j <=i; j++)
        {
           cout<<c;
           c++;
        
        }
        cout<<endl;
        
        
    }
    
}