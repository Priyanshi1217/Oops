#include <bits/stdc++.h>
using namespace std;
class calculator{
    public:
    int add (int a,int b){
        return a+b;
    }
    double add (double a,double b){
        return a+b;
    }
    int add (int a,int b,int c){
        return a+b+c;
    }
};
int main() {
	// your code goes here
calculator c;
cout<<c.add(2,3)<<endl;
cout<<c.add(4.5,6.3)<<endl;
cout<<c.add(4,5,6)<<endl;
}
