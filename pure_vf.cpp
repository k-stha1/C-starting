#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    int id;
    virtual void display()=0;
};

class Teacher: public Person{
    public:
    string name;
    Teacher (int t_id, string t_name){
    id = t_id;
    name = t_name;
    }

    void display() override{
        cout << "The name of the teacher is" << name << " and ID is: " << id;
    }
};

int main(){
    Teacher t1(1,"Kritish");
    t1.display();
    return 0;

}