// Using friend fucntion
/*Syntax: 
friend return_type(class) operator op(const class) 
#include <iostream>
using namespace std;

class number{
    private:
    int x,y;
    public:

    number(){
        x=0;
        y=0;
    }

    number (int num_x,int num_y){
        x=num_x;
        y=num_y;
    }

   friend number operator +(const number &p);

    void display(){
        cout << x << " " << y << endl;
    }
};

number operator +(const number &p){
    return number(-p.x,-p.y);
}

int main(){
    number num1(-1,-2);
    num1.display();
    number num2 = +num1;
    num2.display();

    return 0;
}
*/

// using member method

/*
#include <iostream>
using namespace std;

class number{
    private:
    int x,y;
    public:

    number(){
        x=0;
        y=0;
    }

    number (int num_x,int num_y){
        x=num_x;
        y=num_y;
    }

   number operator +(){
    return number(-x,-y);
   }
    void display(){
        cout << x << " " << y << endl;
    }
};


int main(){
    number num1(-1,-2);
    num1.display();
    number num2 = +num1;
    num2.display();

    return 0;
}
*/
