#include <iostream>
#include <string>
using namespace std;

class printer{
    public:
    void print(int a){
        cout << "The integer value is:" << a << endl;
        }

    void print (float a){
        cout << "The float value is:" << a <<endl;
    }

    void print (double a){
        cout << "The double value is: " << a << endl;
    }

    void print (string a){
        cout << "The string value is" << a << endl;
    }
};

int main(){
    printer p1;
    p1.print(2);
    p1.print(3.2f);
    p1.print(55.5);
    p1.print("Hello World");
    return 0;
}


