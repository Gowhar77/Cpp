#include <iostream>
using namespace std;

int main() {

    float pen, eraser, pencil, total, with_gst;
    cout<<"Enter the cost of pencil"<<endl;
    cin>>pencil;
    cout<<"Enter the cost of pen"<<endl;
    cin>>pen;
    cout<<"Enter the cost of eraser"<<endl;
    cin>>eraser;
    total = pen + eraser + pencil;
    
    with_gst = total + (total / 100) * 18;
    cout<<"Total bill without GST"<<" "<<total<<endl;
    cout<<"total bill with GST is "<<" "<<with_gst<<endl;


    


    return 0;

}