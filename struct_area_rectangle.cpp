#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};
int main() {
    rectangle R1;
    cout<<"Enter the length of rectangle\n";
    cin>>R1.length;
    cout<<"Enter the breadth of rectangle\n";
    cin>>R1.breadth;
    cout<<"Area of rectangle ="<<R1.length*R1.breadth<<endl;
    int area;
    
    cout<<"Perimeter of rectangle ="<<2*R1.length+2*R1.breadth;
    
    return 0;
}