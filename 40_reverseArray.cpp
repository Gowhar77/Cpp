#include <iostream>
using namespace std;
//with extra space 

int reverseArray(int arr[], int size)
{
    int copyarr[size];
    for (int i = 0; i < size; i++)
    {
        int j = size - i - 1;
        copyarr[i] = arr[j];
    }
    cout << "original array is : ";
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "reversed array is : ";
    for (int i = 0; i < size; i++)
    {

        cout << copyarr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at the index " << i << endl;
        cin >> arr[i];
    }
    reverseArray(arr, n);

    return 0;
}