//
// Created by Tanish Sharma on 13-03-2026.
//
#include <iostream>
using namespace std;

class A {
public:
    int x;
    void getdata() {
        cout << "Enter the value of x: ";
        cin >> x;
    }
};

class B {
public:
    int y;
    void getdata1() {
        cout << "Enter the value of y: ";
        cin >> y;
    }
};

class C : public A, public B {
public:
    void product() {
        cout << "Product of x & y: " << x * y << endl;
    }
};

int main() {
    C obj;
    obj.getdata();
    obj.getdata1();
    obj.product();
    return 0;
}