#include <iostream>
#include <string>
using namespace std;

class Account{
    protected:
    int acc_num;
    string name;
    Account(){
        cout << "Welcome to bank Interface" << endl;
    }
    virtual void display_info()=0;
    ~Account(){
        cout << "Thank you for chosing our bank" << endl;
    }
};

class currect_account:public Account{
    public:
    currect_account(int current_acct_num,string current_name){
        acc_num=current_acct_num;
        name=current_name;
         
    }
     void display_info() override{
        cout << "The bank acc Number is" << acc_num << " and owner name is" << name << endl;
    }
    

    ~currect_account(){
        cout << "End of constructor with current saving account with id" << acc_num;
    }
   
};

class saving_account:public Account{
    public:
    saving_account(int current_acct_num,string current_name){
        acc_num=current_acct_num;
        name=current_name;
         
    }
     void display_info() override{
        cout << "The bank acc Number is" << acc_num << " and owner name is" << name << endl;
    }
    

    ~saving_account(){
        cout << "End of constructor with current saving account with id" << acc_num;
    }

};



int main(){
    currect_account c1(1,"Kritish");
    c1.display_info();
    
    return 0;
}
