#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    class address{
        public:
        void show(){
            cout<<"This is student's address"<<endl;
        }
    };
};
int main() {
	// your code goes here
student::address obj;
obj.show();
}
