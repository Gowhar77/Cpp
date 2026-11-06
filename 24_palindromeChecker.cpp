#include <iostream>
using namespace std;
int rev(int n)
{
    int res = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        res = res * 10 + lastDigit;
        n = n / 10;
    }
    return res;
}
int isPalindrom(int num)
{
    int revsNum = rev(num);
    if (num == revsNum)
    {
        cout<<"The number is Plaindrome"<<endl;
    
    } else {
        cout<<"The number is not palindrome"<<endl;
    }
    
}

int main()
{
    int num;
    cout << "Enter the  number " << endl;
    cin >> num;
    isPalindrom(num);
}