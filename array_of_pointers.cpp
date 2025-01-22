#include<iostream>
using namespace std;

int main(){
    //dynamically creating the arrayof size 5
    int *p=new int[5];
    // initialize the array p[] as {10,20,30,40,50}
    for (int i=0; i<5; i++)
    {
        p[i]=10*(i+1);
    }
    cout<<*p<<endl;
    cout<<*p+1<<endl;
    cout<<*(p+1)<<endl;
    cout<<2[p]<<endl;
    cout<<p[2]<<endl;
    *p++;
    //pointing to next location
    cout<<*p;
    return 0;
}