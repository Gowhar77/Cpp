#include<iostream>
using namespace std;

int main(){
   for (int i = 0; i < 50; i++)
   {
    /* code */
    if(i==10){
        continue;
    }
    cout<<i<<endl;
   }
    
    return 0;
}