#include <bits/stdc++.h>
using namespace std;
class area{
    public:
       void calculatearea(int length, int breadth) {
        cout << "Area of Rectangle = " << length * breadth;
    }
};
int main(){
    area a;
    int l,b;
    cout<<"Enter length: "<<endl;
    cin>>l;
    cout<<"Enter breadth: "<<endl;
    cin>>b;
    a.calculatearea(l,b);
}