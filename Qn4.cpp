#include <iostream>
using namespace std;

    void read(double a, double b){
        cout << "Enter two double numbers" << endl;
        cin >> a >> b;
    }

    void calc (double a, double b){
        try {
            if (b==0){
                throw 0;
            }
            double c = a/b;
            cout << "Result: " << c;
        }
        catch ( int num){
            cout << "Cannot divide by " << num << endl;

        }
    }
int main(){
    double a,b;
    read (a,b);
    calc (a,b);
    return 0;

}

