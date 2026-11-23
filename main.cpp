#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    float price;

public:
    // Setters to assign values to the private attributes
    void setTitle(const string& t)   { title = t; }
    void setAuthor(const string& a)  { author = a; }
    void setPrice(float p)           { price = p; }

    void displayInfo() const {
        cout << "Title: " << title
             << ", Author: " << author
             << ", Price: " << price << endl;
    }
};

int main() {
    Book myBook;
    myBook.setTitle("The C++ Programming Language");
    myBook.setAuthor("Bjarne Stroustrup");
    myBook.setPrice(39.99f);

    myBook.displayInfo();
    return 0;
}