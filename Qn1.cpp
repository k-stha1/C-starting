/* Implement static member and static function in a class which calculate and display the total number of object created. Use 
constructor for increasing the count */ 

#include <iostream>
using namespace std;

class count{
    public:
    static int counter;
    

    count(){
        cout << "The function is called for the " << count::counter << " time" << endl;
    }
    static void increaseCount(){
        counter++;
    } 

};

int count::counter=1;

int main(){
    count c1;
    count::increaseCount();
    count c2;
    return 0;

}