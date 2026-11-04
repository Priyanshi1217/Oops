// Wap to demonstrate function overriding using a base class employee and two derived classes manager and developer. override the function calculate_salary to display differnt salaries for each employee

#include <iostream>
using namespace std;

class Employee {
public:
    void calculate_salary() {
        cout << "Employee salary: 30000" << endl;
    }
};

class Manager : public Employee {
public:
    void calculate_salary() {
        cout << "Manager salary: 60000" << endl;
    }
};

class Developer : public Employee {
public:
    void calculate_salary() {
        cout << "Developer salary: 45000" << endl;
    }
};

int main() {
    Employee e;
    Manager m;
    Developer d;

    e.calculate_salary();
    m.calculate_salary();
    d.calculate_salary();

    return 0;
}