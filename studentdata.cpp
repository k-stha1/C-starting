// first way
/* #include <iostream>
using namespace std;

class student{
    private:

    int roll;
    int marks;

    void getInfo(){
        cout<<"Enter roll and marks" << endl; // declearing and defining a function inside a private accessmodifer and accessing it from public accessmodifier.
        cin >> roll >> marks ;
        }

    public:

    void displayInfo(){
        cout << "Roll no is" << roll << endl;
        cout << "Marks is" << marks << endl;

    }

    void Info(){
        getInfo();
    }

};

int main(){

    student s1,s2;
    s1.Info();
    s1.displayInfo();
    return 0;
}
*/

//Second way 
/* #include <iostream>
using namespace std;

class student{
    private:

    int roll;
    int marks;

    void getInfo(){
        cout<<"Enter roll and marks" << endl;
        cin >> roll >> marks ;
        }

    public:

    void displayInfo();   // declearing the function inside and defining outside 
    void Info(){
        getInfo();
    }

};
void student :: displayInfo(){
    cout << "Roll no" << roll << endl;
    cout << "Marks" << marks << endl;
}

int main(){

    student s1,s2;
    s1.Info();
    s1.displayInfo();
    return 0;
}
*/