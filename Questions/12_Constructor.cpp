// WAP to create a student class with a constructor that accepts the student name and class.
#include <bits/stdc++.h>
using namespace std;
 class Student{
    string name;
    int roll;
 public:
 Student(int r){
    roll=r;
    cout<<"Roll: "<<roll<<endl;
 }
 Student(string s){
    name=s;
    cout<<"Name: "<<name<<endl;
 }
 };
 int main(){
    Student S1(101);
    Student S2("Shanti");
 }