#include <iostream>>
using namespace std;

class Person{
    public:
    void display(){
        cout << "I am a Person." << endl;
    }
};

class Employee: virtual public Person{
    public:
    void display(){
        cout << "I am a Employee." << endl;
    }
};

class Student: virtual public Person{
    public:
    void display(){
        cout << "I am a Student." << endl;
    }
};

class WorkingStudent : public Employee, public Student {
    public:
    void display(){
        Person::display();
    }
};

int main(){
    WorkingStudent ws;
    ws.display();

    return 0;
}