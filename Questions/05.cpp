#include <bits/stdc++.h>
using namespace std;
class Student{
    private:
    int marks;
    public:
    void setMarks(int m){
        marks=m;
    }
    void displayMarks(){
        cout<<"Student marks: "<<marks<<endl;
    }
};
int main(){
    Student s;
    int m;
    cout<<"Enter student marks: ";
    cin>>m;
    s.setMarks(m);
    s.displayMarks();
}