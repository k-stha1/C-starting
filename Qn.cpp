// January 2023 question number 8b solution


#include <iostream>
#include <string>
using namespace std;

class Account{
    public:
    string name;
    int acc_num,acc_type;
    void getInfo(){
        cout << "Enter your name" << endl;
        getline(cin,name);
        cout << "Enter acc_tye? " << endl;
        cout << "1. Current account (C) \n 2. Saving account S (S)" << endl;
        cin >> acc_type;
        cout <<"Account number: " << endl;
        cin >> acc_num;
    }
    void displayInfo(){
        cout << "Name: " << name << "\nAccount type: " << acc_type << "\nAccount Number: " << acc_num;
    }
};

class Current_account: public Account{
    public:
    int balance;
    Current_account(int current_blc=0){
        balance=current_blc;
    }
    void display(){
        
        cout << "\nBank Balance:" << balance << endl;
    }

};

class Saving_account: public Account{
    public:
    int balance;
    int interest_blc;
     Saving_account(int saving_blc=0){
        balance=saving_blc;
    }
    void display(){
        interest_blc=balance+15*balance;
        cout << "\nBank Balance with interest:" << interest_blc << endl;
    }

};

int main(){
    int balance;
    Account a1;  
    a1.getInfo();

    if (a1.acc_type==1){
        cout << "Enter your bank blc" << endl;
        cin >> balance;
    Current_account C1(balance);
    a1.displayInfo();
    C1.display();
    }
    else {
        cout << "\nEnter your bank blc" << endl;
        cin >> balance;
    Saving_account S1(balance);
    a1.displayInfo();
    S1.display();
    }
return 0;
}