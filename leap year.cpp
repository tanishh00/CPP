//
// Created by Tanish Sharma on 17-02-2026.
//
#include <iostream>
using namespace std;
int main() {
    int year ;
    cout<<"Enter Year=";
    cin>>year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout<<year<<"\t Is the leap year";
    }
    else{
        cout<<year<<"\t This is not the leap year";
    }
}

