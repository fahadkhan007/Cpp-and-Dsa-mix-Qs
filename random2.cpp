#include <bits/stdc++.h>
using namespace std;
struct employee{
    char name[50];
    int age;
    float salary;
};
int main(){
    employee e1;
    cout<<"Enter Full name: ";
    cin.get(e1.name,50);
    cout<<"Enter age: ";
    cin>>e1.age;
    cout<<"enter salary: ";
    cin>>e1.salary;
    cout<<"name: "<<e1.name<<endl;
    cout<<"age: "<<e1.age<<endl;
    cout<<"salary: "<<e1.salary<<endl;
}