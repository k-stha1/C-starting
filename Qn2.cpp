//Chapter 4, Second question
/* Create a class Time that consist of integer data members for hours,minutes and seconds
The constructor should initialize the data to 0.
A different parameterized constructor should initalize it to fixed values.
Write a member function displayTime() that should display time in the format hr:min:sec 
Also write a copy constructor that should add two objects of Time passed as arguments
Write a program to add two Time objects using the copy constructor and display their values.*/

#include <iostream>
using namespace std;

class Time{
    public:
    int hours, minutes, seconds;

    Time(){
        hours=0;
        minutes=0;
        seconds=0;
    }

    Time(int t_hours,int t_minutes, int t_seconds){
        hours=t_hours;
        minutes=t_minutes;
        seconds=t_seconds;
    }

    void displayTime(){
        cout << "Hours:" << " " << hours << " Minutes:" << " " << minutes << " Seconds: " << " " << seconds << endl;
    }

    Time(const Time &t1, const Time &t2){
        seconds = t1.seconds +t2.seconds;
        minutes = t1.minutes +t2.minutes + seconds/60;
        hours = t1.hours+t2.hours + minutes/60;
        minutes = minutes%60;
        seconds= seconds%60;
    }
};

int main(){
    Time t1(1,20,30);
    Time t2(1,40,50);
    Time t3 (t1,t2);

    cout << "The first time is" << endl;
    t1.displayTime();
    cout << "The second time is" << endl;
    t2.displayTime();
    cout << "The sum of two time is" << endl;
    t3.displayTime();
    return 0;
}