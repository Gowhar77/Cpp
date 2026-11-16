#include <iostream>
using namespace std;

int LinearSearch(int *arr, int n1, int key1) {
    for (int i = 0; i < n1; i++)
    {
        
        if (arr[i] == key1)
        {
        return i;
        }
        
    }
    return -1;
    
}

int main() {
    
    int n, key;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the element at the index "<<i<<endl;
        cin>>arr[i];
    }
    cout<<"enter the key you want to find in the array"<<endl;
    cin>>key;
    cout<<LinearSearch(arr, n, key)<<endl;
   
    
    
}