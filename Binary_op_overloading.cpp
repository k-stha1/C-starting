// Using friend function


#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    
    Point(int x_val = 0, int y_val = 0) {
        x = x_val;
        y = y_val;
    }

    
    friend Point operator-( Point& p1, Point& p2);

    // Function to display the point
    void display()  {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};


Point operator-( Point& p1, Point& p2) {
    return Point(p1.x-p2.x, p1.y-p2.y); 
}

int main() {
    Point p1(3, 4);
    Point p2(1,2);

    cout << "Original Point 1: ";
    p1.display();

    cout << "Original Point 2: ";
    p2.display();

    Point p3 = p1-p2; 
    cout << "Subtracted Point: ";
    p3.display();

    return 0;
}


/*
#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    
    Point(int x_val = 0, int y_val = 0) {
        x = x_val;
        y = y_val;
    }

    
    Point operator-(Point& p2);

    // Function to display the point
    void display()  {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

Point Point :: operator-(Point& p2){
    {
        return Point (x-p2.x,y-p2.y);
    }
}


int main() {
    Point p1(3, 4);
    Point p2(3,2);

    cout << "Original Point 1: ";
    p1.display();

    cout << "Original Point 2: ";
    p2.display();

    Point p3 = p1-p2; 
    cout << "Subtracted Point: ";
    p3.display();

    return 0;
}
*/

