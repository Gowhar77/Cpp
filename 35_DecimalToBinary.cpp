#include <iostream>
using namespace std;

void dTb(int a) {
    int n = a;
    int place = 1;
    int binNum = 0;

    while (n > 0) {
        int rem = n % 2;
        binNum += rem * place;
        n = n / 2;
        place *= 10;
    }

    cout << binNum << endl;
}

int main() {
    int num;
    cout << "Enter the decimal number" << endl;
    cin >> num;

    dTb(num);

    return 0;
}