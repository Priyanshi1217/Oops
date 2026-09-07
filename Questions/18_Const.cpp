// Develop a C++ program to demostrate different types of constructor behaviour in object life cycle management.
#include <iostream>
using namespace std;

class Student {
    string name;
    float marks;

public:
    Student() {
        name = "Unknown";
        marks = 0;
        cout << "Default Constructor Called" << endl;
    }
    Student(string n, float m) {
        name = n;
        marks = m;
        cout << "Parameterized Constructor Called" << endl;
    }
    Student(const Student &s) {
        name = s.name;
        marks = s.marks;
        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
    ~Student() {
        cout << "Destructor Called for " << name << endl;
    }
};

int main() {
    Student S1;
    S1.display();

    cout << endl;
    Student S2("Shanti", 94.5);
    S2.display();

    cout << endl;
    Student S3 = S2;
    S3.display();

    return 0;
} 