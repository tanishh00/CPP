//
// Created by Tanish Sharma on 21-04-2026.
//
#include<iostream>
using namespace std;
int main() {
    int *ptr = new int[5];
    int i ;
    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> ptr[i];

    }
    for (int i = 0; i < 5; i++) {
        cout<<ptr[i]<<endl;

    }
    delete[] ptr;
    return 0;

}