#include<iostream>
using namespace std;
class Distance {
    public:
    int i;
    int r;
    Distance(int a, int b){
        i=a;
        r=b;
    }
    void operator-() {
        i--;
        r--;
        cout<<"Distance is "<<i<<"'"<<r<<"inchs"<<endl;
    }
};

int main(){
    Distance e(12,8);
    -e;
    
    return 0;
}