// Use of destructor
#include <iostream>
#include <string>
using namespace std;

class book{
    private:
    int id;
    string name;

    public:

    book (int book_id=0, string book_name="No name");

    void display(){
        cout << "Id" <<" " << id << " Name" << " " << name << endl;
    }

    book (const book &other);

    ~book(){
        cout << "End of the constructor with id" << " " << id << endl;

    }

};

book::  book (int book_id, string book_name){
        id=book_id;
        name=book_name;
    }

book:: book(const book &other){
    id=other.id;
    name= other.name;

}

int main(){
    book b1;
    b1.display();
    book b2(1,"Kritish");
    b2.display();
    book b3 = b2;
    b3.display();
    return 0;
}

