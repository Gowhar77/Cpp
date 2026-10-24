#include <iostream>
using namespace std;

int main() {

    int num, armst=0;
    int num2=0, num3 = 0;
    cout<<"Program to check whether a number is Armstrong or not"<<endl;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    
    
    while (num>0)
    {
        int lastdigit = num%10;
        armst = armst + (lastdigit*lastdigit*lastdigit);
        num2 = num2 * 10 + lastdigit;
        num = num/10;

    }
    while (num2 >0)
    {
        int lastdigit = num2%10;
        num3 = num3 * 10 + lastdigit;
        num2 = num2/10;

    }
    
    cout<<"sum of cubes of  "<<num3<<" is : "<<armst<<endl;
    
    if (num3 == armst)
    {
        cout<<"The number "<<num3<<"  is armstrong"<<endl;
    } else {
        cout<<"The number "<<num3<<" is not armstrong"<<endl;
    }

    return 0;
}