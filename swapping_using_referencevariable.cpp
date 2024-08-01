#include <iostream>
using namespace std;


/* Putting the variable in private access modifier*/
class Swap{
    private:
    int x,y,t;

    public:

    void getNum(){
        cout <<"Enter two numbers" << endl;
        cin >> x >> y;
        }

    void swapping(int &aref,int &bref){
        t=aref;
        aref=bref;
        bref=t;
       }

    void display(){
        cout << "Numbers after swapping" << endl;
        cout << x << " " << y << endl;
    }

    void swapper(){
        swapping (x,y);
    }
};

int main(){
    Swap p1;
    p1.getNum();
    p1.swapper();
    p1.display();

    return 0;
}