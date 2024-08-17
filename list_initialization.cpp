/* #include <iostream>
#include <string>
using namespace std;
class Person {
protected:
string name;
string gender;
int age;
public:
Person(string n, string g, int a){ // Base class constructor
name = n; gender = g; age = a;
}
void displayPersonInfo() {
cout << "Name: " << name << "\nGender: " << gender << "\nAge: " << age << endl;
}
};

class Teacher : public Person {
private:
string position;
public:
// list initialization for constructors to invoke base class constructor
Teacher(string n, string g, int a, string p) : Person(n, g, a) {
// Person(n, g, a) will invoke Person constructor.
position = p;
}
void display() {
displayPersonInfo();
cout << "Position: " << position << endl;
}
};
class Student : public Person {
private:
string department;
public:
Student(string n, string g, int a, string d) : Person (n, g, a), department(d) {
// Person (n, g, a) will call person constructor
// department(d) will assign member variable "department" with value of d
}
void display() {
displayPersonInfo();
cout << "Department: " << department << endl;
}
};
int main() {
Teacher teacher("Saugat", "Male", 30, "Lecturer");
Student student("Sita", "Female", 19, "Computer Science");
cout << "Teacher Info:" << endl;
teacher.display();
cout << "\nStudent Info:" << endl;
student.display();
return 0;
}
*/


#include <iostream>
#include <string>
using namespace std;

class Book{
    public:
    string name;
    int id;
    Book(string book_n="No name", int book_id=0):name {book_n},  id {book_id}
    {
           cout << "The name of book is: " << name << " and book id is: " << id << endl;
    }

    ~Book (){
        cout << "End of constructor with book id " << id << endl;
    }
        
};

int main(){
    Book b1;
    Book b2("The last of us",1);
    return 0;
}


