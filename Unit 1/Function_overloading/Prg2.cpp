#include <iostream>
using namespace std;
class Area{
    public:
    int area(int a){
        return a*a;
    }
    float area(float a,float b){
        return a*b;
    }
    double area(double r){
        return r*3.14*3.14;
    }
};
int main(){
    Area a;

    int side;
    float length,breadth;
    double radius;

    cout<<"-----------~Area of shapes~-----------\n";

    cout<<"Side of square: ";
    cin>>side;

    cout<<"\nSide of rectangle: ";
    cin>>length>>breadth;

    cout<<"\nRadius of circle: ";
    cin>>radius;
    cout<<"\nArea of square: "<<a.area(side)<<"\nArea of rectangle: "<<a.area(length,breadth)<<"\nArea of circle: "<<a.area(radius);
}