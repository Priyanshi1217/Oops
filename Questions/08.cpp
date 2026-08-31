// Write a C++ program to create a student class with a member function display define inside the class.

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main()
{
    Student s;

    s.name = "Priyanshi";
    s.rollNo = 101; 

    s.display();

    return 0;
}