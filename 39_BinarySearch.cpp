#include <iostream>
using namespace std;

int BinarySearch(int *arr, int n1, int key1) {
    int st=0, end = n1-1;
    while (st <= n1)
    {
        int mid = (st + end) /2;
        if (arr[mid] == key1)
        {
        return mid;
        }
        else if (arr[mid] < key1)
        {
            st = mid +1;

        }else {
            end = mid-1;
        }
        
        
    }
    
    
    return -1;
    
}

int main() {
    
    int n, key;
    cout<<"Enter the size of sorted array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the element at the index "<<i<<endl;
        cin>>arr[i];
    }
    cout<<"enter the key you want to find in the array"<<endl;
    cin>>key;
    cout<<BinarySearch(arr, n, key)<<endl;
   
    
    
}