//  Function overriding using a base class animal and derived class dog. dedfine a function sound() in both classes to display different sounds.

#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks: Woof Woof!" << endl;
    }
};

int main() {
    Animal a;
    Dog d;

    a.sound();
    d.sound();

    return 0;
}