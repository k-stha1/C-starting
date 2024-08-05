
#include <iostream>
using namespace std;

class Animal{
    public:
    void display(){
        cout << "The animal can walk" << endl;
    }
};

class Mammal: public Animal{
    public:

    void feature(){
    display();
    cout << "Mammal dont lay egg" ;
    }
};

int main(){
    Mammal human;
    human.feature();
    human.display(); 
    
     return 0;

}


