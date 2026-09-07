// WAP to  create a rectangle class and use parameterized constructor to calculate area of rectangle.

#include <iostream>
using namespace std;

class rectangle{
    int a,b;
    public:
    rectangle(int x,int y){
        a=x;
        b=y; 
    }
    void display(){
        cout<<"Area: "<<a*b;
    }
    };
int main(){
    rectangle obj(10,20);
    obj.display();
    return 0;
}