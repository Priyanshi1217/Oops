// WAP using auto and a range based for loop to traverse and diaplay elements of a collection.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Using auto and range-based for loop
    for (auto element : numbers) {
        cout << element << " ";
    }

    return 0;
}