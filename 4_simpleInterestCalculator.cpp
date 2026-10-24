#include <iostream>
using namespace std;

int main() {
    int p, time;
    float rate,si;
    char t;
    cout<<"Enter the principal amount(P)"<<endl;
    cin>>p;
    cout<<"Enter the rate"<<endl;
    cin>>rate;
    cout<<"Do you want to enter time in months. Type M for months and Y for years" <<endl;
    cin>>t;

    if(t == 'Y') {
        cout<<"Enter time in years"<<endl;
        cin>>time;
        si = (p*rate*time) / 100;
        cout<<"Simple interse is "<<" "<<si<<endl;
    

    }
    else if(t == 'M') {
        cout<<"Enter the time in months"<<endl;
        cin>>time;
        si = (p*rate*time/12) / 100;
        cout<<"Simple interse is "<<" "<<si<<endl;

    }
    else {
        cout<<"invalid character"<<endl;
    }






    return 0;
}