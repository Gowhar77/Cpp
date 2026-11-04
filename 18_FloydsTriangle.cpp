#include <iostream>
using namespace std;
int main() {
    int n;
    int val=1;
    cout<<"Enter the number of rows/columns"<<endl;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = i; j >0; j--)
        {
            cout<<val;
            cout<<",";
            val++;
        }
        cout<<endl;
        
    }
    
}