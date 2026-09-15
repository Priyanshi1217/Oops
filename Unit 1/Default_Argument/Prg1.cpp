#include <iostream>
using namespace std;

void add(int a, int b = 10) {
    cout << a + b << endl;
}

int main() {
    add(5);
    add(5, 20);

    return 0;
}