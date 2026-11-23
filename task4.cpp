#include <iostream>
using namespace std;

class Counter {
private:
    static int count;   // shared by all Counter objects

public:
    Counter()  { count++; }
    ~Counter() { count--; }

    static int getCount() { return count; }
};

// Definition of the static member (required, outside the class)
int Counter::count = 0;

int main() {
    Counter* c1 = new Counter();
    cout << "Current Count: " << Counter::getCount() << endl;

    Counter* c2 = new Counter();
    cout << "Current Count: " << Counter::getCount() << endl;

    Counter* c3 = new Counter();
    cout << "Current Count: " << Counter::getCount() << endl;

    // Delete one object
    delete c3;
    cout << "Current Count: " << Counter::getCount() << endl;

    // Clean up the rest
    delete c2;
    delete c1;
    cout << "Current Count: " << Counter::getCount() << endl;

    return 0;
}