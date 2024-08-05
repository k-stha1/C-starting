#include <iostream>
using namespace std;

class Time{
	private:
	int HH;
	int MM;

	public:

	Time(int hours=0,int minutes =0){
		HH = hours;
		MM = minutes;
	}

	void displayTime(){
		cout << HH << " Hours and " << MM << " minutes" << endl; 
	}

	bool operator >(Time& t2){
		if (HH > t2.HH){
			return true;
		}
		else if (HH == t2.HH && MM > t2.MM) {
        return true;
    }
    return false;
		
	}

	Time (const Time& other){
		HH=other.HH;
		MM= other.MM;


	}

};

int main(){
	Time t1(1,20);
	Time t2(1,40);
	Time t3(t1);
	
	cout << "Time 1 is:" << endl;
	t1.displayTime();
	cout << "Time 2 is:" << endl;
	t2.displayTime();
	cout << "Time 3 is:" << endl;
	t3.displayTime();

	if(t1 > t2 ){
		cout << "Time t1 is greater then time t2." << endl;
		}
		else{
			cout << "Time t2 is greater than time t1." << endl;
		}

	if (t3>t2){
		cout << "Time t3 is greater then time t2." << endl;
		}
		else{
			cout << "Time t2 is greater than time t3." << endl;

	}
	

	return 0;

}