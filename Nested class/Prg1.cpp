#include <bits/stdc++.h>
using namespace std;
class commputer{
    public:
    class processor{
        public:
        string brand;
        string Model;
        string generation;
        int yearmfg;
        void show(){
            cout<<"The details of the preocessor are as follows: "<<endl;
            cout<<"Brand: "<<brand<<endl;
            cout<<"Model: "<<Model<<endl;
            cout<<"Generation: "<<generation<<endl;
            cout<<"Year manufactured: "<<yearmfg<<endl;
        }
    };
};
int main() {
	// your code goes here
commputer::processor obj;
obj.brand="Intel";
obj.Model="Core i5-12400";
obj.generation= "12th generation";
obj.yearmfg= 2016;
obj.show();
}
