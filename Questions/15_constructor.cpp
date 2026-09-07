// WAP to create a student class add and use parameterised constructor to add two numbers.

#include <iostream>
using namespace std;

class add{
    int a,b;
    public:
    add(int x,int y){
        a=x;
        b=y;
    }
    void display (){
        cout<<"Sum = "<<a+b;
    }
};
int main(){
    add obj(10,20);
    obj.display();
    return 0;
}