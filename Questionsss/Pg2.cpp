// WAP in cpp using shared pointer, share the same student obj.Display the reference count.
#include <iostream>
#include <memory>
using namespace std;
class Student {
public:
    string name;
    int age;
    Student(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    shared_ptr<Student> s1 = make_shared<Student>("Priyanshi", 20);
    shared_ptr<Student> s2 = s1;
    s1->display();
    cout << "Reference count: " << s1.use_count() << endl;
    return 0;
}