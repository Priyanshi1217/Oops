//Write a c++ programm to add 2 numbers using pointer.
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int *p = &a;
    int *q = &b;

    cout << "Sum = " << *p + *q << endl;

    return 0;
}