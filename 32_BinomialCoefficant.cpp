/* WAF to find the binomial coefficient for givn n and r;
*/
#include <iostream>
using namespace std;
int fact(int a) {
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    
    }
    return fact;
}
int binoCoef(int a, int b) {
    int nfact = fact(a);
    int rfact = fact(b);
    int rMfFact = fact(a-b);
    return nfact/(rfact*rMfFact);
}
int main() {
    int n, r;
    cout<<"Enter the total number of items (n)"<<endl;
    cin>>n;
    cout<<"Enter the number of items to be selected (r)"<<endl;
    cin>>r;
    cout<<binoCoef(n,r)<<endl;
    

}