/* Putting the variable in private access modifier*/
/* #include <iostream>
using namespace std;

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
*/

/*Putting the acces modfier public*/


#include <iostream>
using namespace std;

 class Swap{
    public:
    int x,y,t;

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

};

int main(){
    Swap p1;
    p1.getNum();
    p1.swapping(p1.x,p1.y);
    p1.display();

    return 0;
}








