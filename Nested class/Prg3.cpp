#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    class address{
        public:
        string city;
        void show(){
            cout<<"City: "<<city<<endl;
        }
    };
};
int main() {
	// your code goes here
student::address obj;
obj.city= "Varanasi";
obj.show();
}
