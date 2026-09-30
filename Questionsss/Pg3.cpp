// Implement a self referential class  to create a singly linked list. First implement it using unique pointer and null pointer.
#include <iostream>
#include <memory>
using namespace std;

class Node {
public:
    int data;
    unique_ptr<Node> next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {
    unique_ptr<Node> head = make_unique<Node>(10);
    head->next = make_unique<Node>(20);
    head->next->next = make_unique<Node>(30);
    Node* temp = head.get();
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next.get();
    }
    cout << "NULL" << endl;
    return 0;
}