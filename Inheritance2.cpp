#include <iostream>
using namespace std;


class Num{
    protected:
    int x,y;
    public:
    void getNum(){
        cout << "Enter two numbers" << endl;
        cin >> x >> y;
        }
};

class SimpleCalculator: public Num{
    public:
    void displayCalc(){
        getNum();
        cout << "Sum is: " << x + y << endl;
        cout << "Difference is:" << x-y << endl;
    }
};

class ScientificCal :public Num {
    public:
    void displayCalc(){
        getNum();
        cout << "Sum is: " << x + y << endl;
      
    }
};

class Derived: public SimpleCalculator, public ScientificCal{
    public:
    void displayCalc(){
    ScientificCal::displayCalc();
    }
};

int main(){
    Derived d;
    d.displayCalc();
    
    return 0;
}