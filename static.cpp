#include <iostream>
using namespace std;

class increase{
    public:
    static int counter;

    static void increament(){
        counter++;
    }

    static int display (){
        return counter;
    }

};

int increase ::counter =0;

int main(){

    increase num;
    increase::increament();
    increase::increament();
    cout << "The final value of counter" << increase::display() << endl;
return 0;
}


/* #include <iostream>
using namespace std;

class increase{
    public:
    static int counter;

    static void increament(){
        counter++;
    }

    void display (){
        cout<< "The updated value" << counter << endl;
    }

};

int increase ::counter =0;

int main(){

    increase num;
    increase::increament();
    increase::increament();
    num.display();
return 0;
}
*/ 


#include <iostream>
using namespace std;

class Car {

private:
    static int count; // Static data member

public:
    // Static member function to get the count
    static int getcount() {
        return count;
    }

    // Static member function to increment the count
    static void incrementcount() {
        count++;
    }

};

// Initializing the static data member
int Car::count = 0;

int main() {
	
	cout << "Number of Car objects: " << Car::getcount() << endl; 
	
    // Preferred way: Using the class name
    Car::incrementcount();
    Car::incrementcount();
	
	cout << "Number of Car objects: " << Car::getcount() << endl; 
	
    // Also possible: Using an object
    Car myCar;
    myCar.incrementcount();

    cout << "Number of Car objects: " << Car::getcount() << endl; 

    return 0;
}



