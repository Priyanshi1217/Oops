#include <iostream>
#include <string>
using namespace std;
class Student {
    public:
    string name;
    int age;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
    class car{
        public:
        string brand;
        int year;
        void display(){
            cout<<"Brand:"<<brand<<endl;
            cout<<"Year :"<<year<<endl;
        }
    };
    int main(){
    Student s;
        cin>>s.name;
        cin>>s.age;
        s.display();
        car c;
        cin>>c.brand;
        cin>>c.year;
          c.display();
}