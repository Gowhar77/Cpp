#include <iostream>
using namespace std;
//with extra space 

int reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size-1;
    while (start < end) 
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    
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
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}