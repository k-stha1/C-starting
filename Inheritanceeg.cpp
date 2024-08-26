#include <iostream>
using namespace std;

class Base{
    protected:
    string name;
    int age;

    void getInfo(){
        cout << "Enter your name" << endl;
        cin >> name;
        cout << "Enter your age" << endl;
        cin >> age;
    }

     void displayInfo(){
        cout << "Name: " << name << " Age: " << age ;
    }
};

class Teacher: public Base{
    public:
    string position;
    void getInfo() {
        Base::getInfo();
        cout << "Enter your position" << endl;
        cin >> position;
        }

    void display(){
        displayInfo();
        cout << " Position: " << position << endl;
    }
};

class Student: public Base{
    public:
    string Department;
    void getInfo(){
        Base::getInfo();
        cout << "Enter your department" << endl;
        cin >> Department;
    }
    void display(){
        displayInfo();
        cout << "Department: " << Department << endl;
    }
};