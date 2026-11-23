#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    int year;

public:
    // Default constructor
    Car() : make("Unknown"), year(0) {}

    // Parameterized constructor
    Car(const string& m, int y) : make(m), year(y) {}

    // Destructor
    ~Car() {
        cout << "Car object is being destroyed: " << make << endl;
    }

    void displayInfo() const {
        cout << "Car Make: " << make << ", Year: " << year << endl;
    }
};

int main() {
    Car car1;                    // default constructor
    Car car2("Toyota", 2021);    // parameterized constructor

    car1.displayInfo();
    car2.displayInfo();

    return 0;
}