#include <bits/stdc++.h>
using namespace std;

class Student{
    int roll_no;
    string name;
    float marks;
    
    public:
    void get_info(){
        cin>>roll_no;
        cin.ignore();
        getline(cin, name);
        cin>>marks;
    }
    
    void display_info(){
        cout<<"Roll no. :"<<roll_no<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main() {
	// your code goes here
int n;
cin>>n;
vector<Student>s(n);
for(int i=0;i<n;i++){
    s[i].get_info();
}
cout<<"---Student Record---"<<endl;
for(int i=0;i<n;i++){
    cout<<"Student"<<i+1<<endl;
    s[i].display_info();
}
}
