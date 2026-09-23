//WAP in cpp to store a integer in a variable and display its value using a pointer.
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;

    cout << "Value = " << *p << endl;

    return 0;
}