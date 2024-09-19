#include<iostream>
using namespace std;


enum EAccountType
{
    SAVINGS,
    CURRENT,
    DMAT
};
/********************************************************************* */
class InSufficientFundsException
{
    string message;
public:

    InSufficientFundsException(string message){
        this-> message;
    }

    void display(){
        cout << message;
    }
    
};
/**************************************************** */
class Account
{
    
    double balance;
    EAccountType Atype;

public:
int accno;
Account()
{
    accno=100;
    balance=10000;
    

}
Account(int accno,EAccountType Atype,double balance)
{
    accno=accno;
    // EAccountType Atype=Atype;
    balance=balance;

}
void accept()
{
    cout<<"Enter Account No :";
    cin>>accno;

    int x;
    cout<<"Choose Account Type  :"<<endl;
    cout<<"0. Saving"<<endl;
    cout<<"1. Current"<<endl;
    cout<<"2. DMAT"<<endl;
    cin>>x;
    Atype = EAccountType(x);

    cout<<"Enter Balance :";
    cin>>balance;
    

}
void display()
{
    cout<<"Account Number :"<<accno<<endl;
    switch (Atype)
    {
    case 0:
    {
        cout<<"Account Type = Saving"<<endl;
    }
    break;
    case 1:
    {
        cout<<"Account Type = Current"<<endl;
    }
    break;
    case 2:
    {
        cout<<"Account Type = DMAT"<<endl;
    }
    break;
    }
    // cout<<"Account Type :"<<Atype<<endl;
    cout<<"Account Balance :"<<balance<<endl;
}
void deposit(double amount)
{
    if(amount <0)
    {
        throw InSufficientFundsException("Cannot enter negative value ");
    }
    balance = balance + amount;
    cout<<"Successfully submitted "<<balance<<endl;
}
void withdraw(double amount)
{
    if(amount <=0)
    {
        throw InSufficientFundsException("Cannot Enter 0 or negaltive values ");
    }

    if(amount>balance)
    {
        throw InSufficientFundsException("accno,balance,amoun");
    }

    balance = balance - amount;
    cout<<"Successfully Withdrawal "<<endl;


}
int getAccno()
{
    return accno;
}
};
int main()
{
    Account*arr[5];
    int choice;
    int acno;
    int amt;
    do
    {
        cout<<"0. EXIT"<<endl;
        cout<<"1. Accept Account detail "<<endl;
        cout<<"2. Amount Deposit; "<<endl;
        cout<<"3. Amount withdraw; "<<endl;
        cout<<"4. Display your Accounts"<<endl;
        cin>>choice;

        switch (choice)
        {
            case 1:
            {
                for(int i=0;i<5;i++)
                {
                    cout<<"Enter A/c Detail :"<<endl;
                    arr[i]=new Account;
                    arr[i]->accept();
                }
            }
            break;
            case 2:
            {
                
                cout << "ENTER YOUR ACCNO : " << endl;
                cin >> acno;
                cout << "ENTER YOUR AMOUNT : "<<endl;
                cin >> amt;
                for(int i=0;i<5;i++)
                {
                    if(arr[i]->accno == acno){
                        arr[i]->deposit(amt);
                    }
                }
            }
            break;
            case 3:
            {
                cout << "ENTER YOUR ACCNO : " << endl;
                cin >> acno;
                cout << "ENTER YOUR AMOUNT : "<<endl;
                cin >> amt;
                for(int i=0;i<5;i++)
                {
                    if(arr[i]->accno == acno){
                        arr[i]->withdraw(amt);
                    }
                }
            }
            case 4:
            {
                cout << "ENTER YOUR ACCNO : " << endl;
                cin >> acno;
                for(int i=0;i<5;i++)
                {
                    if(arr[i]->accno == acno)
                    {
                        arr[i]->display();
                    }
                }
            }
            break;
        
            default:
            {
                cout<<"wrong choice ...thank you for using application...";
            }
            break;
        }
    }while(choice!=0);
    return 0;
}

// InSufficientFundsException(int accno,double balance,double withdrawAmount)
// {
//     this->accno=accno;
//     this->currentBalance=currentBalance;
//     this->withdrawAmount=withdrawAmount;
// }
// void display()
// {
//     cout<<"Account no :"<<accno<<endl;
//     cout<<"Current Balance :"<<currentBalance<<endl;
//     cout<<"withdrawAmount :"<<withdrawAmount<<endl;

// }

