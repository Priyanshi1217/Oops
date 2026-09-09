// WAP of swapping of two numbersusing call by value and same program by call by reference.

#include <iostream>
using namespace std;

void SwapValue(int a,int b){
    int t=a; a=b; b=t;
}

void SwapRef(int &a,int &b){
    int t=a; a=b; b=t;
}
int main(){
int a,b;
cout<<"Enter first number: "<<endl;
cin>>a;
cout<<"Enter second number: "<<endl;
cin>>b;
cout<<"Before: "<<a<<" "<<b<<endl;

SwapValue(a,b);
cout<<"Call by value: "<<a<<" "<<b<<endl;
SwapRef(a,b);
cout<<"Call by ref: "<<a<<" "<<b<<endl;
return 0;
}