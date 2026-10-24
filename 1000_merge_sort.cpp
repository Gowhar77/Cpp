#include <iostream>
using namespace std;
#include <vector>

//step 2
void merge(vector<int> &arr, int st, int mid, int end)  {
    vector<int> temp;
    int i = st;
    int j =mid+1;

    while (i <= mid && j <=end)
    {
      if (arr[i] <= arr[j]) {
        temp.push_back(arr[i]);
        i++;
      } else {
        temp.push_back(arr[j]);
        j++;
      }
      
    }
    while (i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
        
    }
    while (j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    // step 3

    for (int idx= 0; idx < temp.size(); idx++)
    {
        arr[idx+st] = temp[idx];
    }
    
    

    
    
}


//Step 1 

void mergeSort(vector<int> &arr, int st, int end ) {
    if(st < end) {
        int mid =st + (end-st)/2;
        mergeSort(arr, st, mid); // left half
        mergeSort(arr, mid+1, end); // right half

        merge(arr, st, mid, end);
    }
}




int main() {
    //step 4
    vector<int> arr = {12,31,55,25,65,11,32,};
    mergeSort(arr, 0, arr.size()-1);
    for (int val : arr)
    {
       cout << val << " ";
    }
    cout << endl;
    
    return 0;
}





