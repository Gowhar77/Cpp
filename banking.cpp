#include<iostream>
using namespace std;
// cpp program for banking management system
class Bank {
    private:
    int acno;
    char name[30];
    long balance;
    public:
    void OpenAccount()
    {
        cout<<"Enter Account Number:"<<endl;
        cin>>acno;
        cout<<"Enter Name:"<<endl;
        cin>>name;
        cout<<"Enter Balance"<<endl;
        cin>>balance;
    }
    void ShowAccount()
    {
        cout<<"Account Number:"<<acno<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"balance : "<<balance<<endl;

    }
    void deposit()
    {
        long amt;
        cout<<"Enter Amount you want to deposit?"<<endl;
        cin>>amt;
        balance=balance+amt;
    }
    void Withdrawal()
    {
        long amt;
        cout<<"Enter the amount you want to withdrawal?"<<endl;
        cin>>amt;
        if(amt<=balance)
        balance=balance-amt;
        else
        cout<<"Less Balance"<<endl;
    }
    int Search(int);
    
};
int Bank::Search(int a)
{
    if(acno == a)
    {
        ShowAccount();
        return(1);
    }
    return(0);
}
int main(){
    Bank C[3];
    int found=0, a,ch,i;
    for(i=0;i<=2;i++)
    {
        C[i].OpenAccount();
    }
    do
    {
        cout<<"\n\n1:Display All\n2:By Account No\n3:Deposit \n4:Withdrawal\n5:Exit"<<endl;
        cout<<"Please input your choice:";
        cin>>ch;
        switch (ch)
        {
        case 1: //displating account info
        for(i=0;i<=2;i++){
            C[i].ShowAccount();
        }
            break;
            case 2: //searching the record
            cout<<"Account Number?";
            cin>>a;
            for(i=0;i<=2; i++){
                found=C[i].Search(a);
                if(found)
                break;
            }
            if(!found)
            cout<<"Record not found"<<endl;
            break;
            case 3: //deposit operation
            cout<<"Account Number to deposit amount?"<<endl;
            cin>>a;
            for(i=0;i<=2;i++)
            {
                found=C[i].Search(a);
                if(found) {
                C[i].deposit();
                break;
            }
        
        
        }
        if(!found)
        cout<<"Record not found"<<endl;
        break;
        case 4: //withdrawal operation
        cout<<"Account number to withdraw amount?"<<endl;
        cin>>a;
        for ( i = 0; i <=2; i++)
        {
            found=C[i].Search(a);
            if(found) {
                C[i].Withdrawal();
                break;
            }
        }
        if(!found)
        cout<<"Record not found"<<endl;
        break;
        case 5: //Exit
        cout<<"Have a nice day"<<endl;
        break;
        default:
        cout<<"Wrong Option"<<endl;
    }
        
    } while (ch !=5);
    
    return 0;
}