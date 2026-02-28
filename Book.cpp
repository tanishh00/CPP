//
// Created by Tanish Sharma on 25-02-2026.
//
#include<iostream>
using namespace std;
class book {
    private:
    string name;
    string author;
    int year;
    public:
    void getdata() {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter author: ";
        cin>>author;
        cout<<"Enter year:yyyy";
        cin>>year;

    }
    void display() {
        cout<<"Name: "<<name<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Year: "<<year<<endl;

    }

};
int main() {
    book val;
    val.getdata();
    val.display();
    return 0;
}