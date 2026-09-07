// WAP to create a student class multiply and use parameterised constructor to multiply two numbers.

#include <iostream>
using namespace std;
class multiply{
    int a,b;
    public:
    multiply(int x,int y){
        a=x;
        b=y;
    }
    void display (){
        cout<<"Multiply = "<<a*b;
    }
};
int main(){
    multiply obj(10,20);
    obj.display();
    return 0;
}