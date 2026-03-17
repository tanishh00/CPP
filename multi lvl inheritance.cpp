//
// Created by Tanish Sharma on 17-03-2026.
//
#include <iostream>
using namespace std;
class person {
public:
    string name;
    int age;
    void getdata1() {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age";
        cin>>age;
    }
};
class student : public person {
public:
    int rollno;
    string course;
    void getdata2() {
        cout<<"Enter rollno:";
        cin>>rollno;
        cout<<"Enter course";
        cin>>course;
    }

};
class grad : public student {
public:
    string spec;
    string rese;
    void getdata3() {
        cout<<"Enter spec:";
        cin>>spec;
        cout<<"Enter rese:";
        cin>>rese;
    }
    void display() {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"rollno:"<<rollno<<endl;
        cout<<"course:"<<course<<endl;
        cout<<"Spec:"<<spec<<endl;
        cout<<"Rese:"<<rese<<endl;

    }
};
int main() {
    grad obj;
    obj.getdata1();
    obj.getdata2();
    obj.getdata3();
    obj.display();
}
