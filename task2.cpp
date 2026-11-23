#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    char grade;

public:
    // Setters
    void setName(const string& n) { name = n; }
    void setAge(int a)            { age = a; }
    void setGrade(char g)         { grade = g; }

    // Getters
    string getName() const { return name; }
    int getAge() const     { return age; }
    char getGrade() const  { return grade; }
};

int main() {
    Student s;
    s.setName("Alice");
    s.setAge(20);
    s.setGrade('A');

    cout << "Student Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;
    cout << "Grade: " << s.getGrade() << endl;
    return 0;
}