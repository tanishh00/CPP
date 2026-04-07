//
// Created by Tanish Sharma on 07-04-2026.
//
#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Base class" << endl;
    }
};

class B : public A {
public:
    double d;
    void show(double x) {
        d = x;
        cout << "Derived class " << d << endl;
    }
};

int main() {
    B obj;
    obj.show(10);     // Calls B::show(double)
    obj.A::show();    // Calls A::show() using scope resolution
    return 0;
}
