#include <iostream>
using namespace std;

class bankdetail {
public:
    int id;
    int amount;
    string owner;

    // Constructor declaration with default arguments
    bankdetail(int bank_id = 0, int bank_amount = 0, string bank_owner = "No name");

    void display();
};

// Constructor definition outside the class
bankdetail::bankdetail(int bank_id, int bank_amount, string bank_owner) {
    id = bank_id;
    amount = bank_amount;
    owner = bank_owner;
}

void bankdetail::display() {
    cout << "Id: " << id << ", Owner: " << owner << ", Amount: " << amount << endl;
}

int main() {
    bankdetail b1; // Using default constructor
    bankdetail b2(1, 20000, "Kritish Shrestha"); // Using parameterized constructor
    b1.display();
    b2.display();
    return 0;
}
