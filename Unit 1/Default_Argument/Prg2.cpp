#include <iostream>
#include <string>

using namespace std;

class test{
    public:
    void greeting(string name="Pisuke"){
        cout<<"Welcome "<<name<<endl;
    }
};
int main(){
    test t;
    t.greeting();
    t.greeting("Naruto");
}