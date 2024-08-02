//Use of string getline, cin.ignore

#include <iostream>
using namespace std;

class read{
    public:
    string name;
    int id;

    void readData(){

        cout <<"Enter id" << endl;
        cin >> id;
        cin.ignore();
        cout << "Enter name of the book" << endl;
        getline(cin,name);

    }

    void display(){
        cout <<"The name of book is " << name << " and id is " << id << endl;
    }
};

int main(){
    read b1;
    b1.readData();
    b1.display();
    return 0;
}