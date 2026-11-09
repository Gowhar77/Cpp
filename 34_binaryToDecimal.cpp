#include <iostream>
#include <cmath>
using namespace std;
int bTd(int a)
{
    int decimal = 0;
    int i = 0;
    while (a > 0)
    {
        int lastDigit = a % 10;

        if (lastDigit == 1 || lastDigit == 0)
        {

            decimal = decimal + lastDigit * pow(2, i);
            if (lastDigit != 0 || lastDigit != 1)

                a = a / 10;
            i = i + 1;
        }
        else {
            cout<<"Invalid Binary number"<<endl;
            break;
        }
    }
    return decimal;
}

int main()
{
    int num;
    cout << "Enter the Binary number" << endl;
    cin >> num;
    cout << bTd(num) << endl;
}