#include<iostream>
using namespace std;

class Account {
    int balance;
public:
    Account();
    Account(int);
    int deposite(int a);
    int withdraw(int a);
    int checkBalance();
};

Account::Account(){
    balance = 0;
}

Account::Account(int b){
    balance = b;
}

int Account::deposite(int a){
    balance+= a;
    return balance;
}

int Account::withdraw(int a){
    balance-= a;
    return balance;
}

int Account::checkBalance(){
    return balance;
}

int main(){
    Account ac;
    cout<<"Account Initiated with "<<ac.checkBalance()<<endl;
    int d,w;
    cout<<ac.checkBalance()<<endl;
    cout<<"Enter the amount you want to deposite: ";
    cin>>d;
    ac.deposite(d);
    while(true){
        cout<<"Enter the ammount you want to withdraw: ";
        cin>>w;
        try{
            if(w > 15000) throw 'O';
            if(ac.checkBalance() < w) throw 'I';
            ac.withdraw(w);
        }
        catch(char s){
            if(s == 'O') cout<<"Overlimit: Please enter amount less than 15000."<<endl;
            else if(s == 'I') cout<<"InsufficientBalance: Please enter amount not greater than "<<ac.checkBalance()<<endl;
        }
        cout<<"Remaining Balance: "<<ac.checkBalance()<<endl;
        if(ac.checkBalance() == 0){
            cout<<"Balance: 0"<<endl;
            break;
        }
    }
    return 0;
}
