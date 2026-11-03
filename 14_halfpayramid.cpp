#include <iostream>
using namespace std;
int main() {
 int n;
    cout<<"The the number of rows/colums for the pyramid"<<endl;
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
           cout<<j;
        }
        cout<<endl;
        
        
    }
    
}