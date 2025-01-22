#include<iostream>
using namespace std;
class test {
    int x=5;
    public:
    test() {
       
            cout<<"Constructor "<<i<<" is executed"<<endl;
        }
    }
    ~test() {
        int i=1;
        for(int i=1;i<=x;i++) {
            cout<<"Desstructor "<<i<<" is executed"<<endl;
        }
    }
};

int main(){
    test c1[5];
    
    
    return 0;
}