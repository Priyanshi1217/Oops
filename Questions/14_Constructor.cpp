//WAP to create a student class with a default constructor that accepts student name and marks.

#include <iostream>
using namespace std;
class Student {
    string name;
    float marks;
public:
    Student() {
        name = "Shanti";
        marks = 94.5;
        name="Shashikala";
        marks= 85.4;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student S1;
    S1.display();

    return 0;
}

// #include <iostream>
// using namespace std;
// class Student {
//     string name;
//     float marks;

// public:
//     Student(string s, float m) {
//         name = s;
//         marks = m;
//     }

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };

// int main() {
//     Student S1("Shanti", 94.5);

//     S1.display();

//     return 0;
// }