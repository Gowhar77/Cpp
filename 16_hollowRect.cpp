#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows/Colums" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << '*';
            }
        }
        cout<<endl;
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n)
            {
                cout << '*';
            }
            else
                cout << " ";
        }
        
    }
}