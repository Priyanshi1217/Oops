// Wap in cpp using unique pointer to dynamically create a student obj and display the student detail.
#include <iostream>
#include <memory>
using namespace std;
class Student {
    string name;
    int age;
public:
    Student(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};
int main() {
    unique_ptr<Student> s = make_unique<Student>("Priyanshi", 20);
    s->display();
    return 0;
}