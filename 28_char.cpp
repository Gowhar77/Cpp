/*Write a function that accepts a character (ch) as parameters & returns 
the character that occurs after ch in the English alphabet.
Eg : input = ‘c’, return value = ‘d’
Note : for ch = ‘z’, return ‘a’.
*/
#include <iostream>
using namespace std;
char charincre(char a) {
    if (a == 'z')
    {
        return 'a';
    }
    else if (a == 'Z')
    {
        return 'Z';
    }
    else {
        return a+1;
    }
    
    
}

int main() {
    char ch;
    cout<<"Enter the character a-z or A-Z"<<endl;
    cin>>ch;
    cout<<charincre(ch)<<endl;
}