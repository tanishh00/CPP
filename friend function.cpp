//
// Created by Tanish Sharma on 24-04-2026.
//
// #include<iostream>
// using namespace std;
//
// class box {
// public:
//     int length;
//     int width;
//
//     void set(int l, int b) {
//         length = l;
//         width = b;
//     }
//
//     int calculate(box b); // Declaration inside class
// };
//
// // Definition outside class using scope resolution operator
// int box::calculate(box b) {
//     return b.length * b.width;
// }
//
// int main() {
//     box b;
//     b.set(5, 3); // Initialize before use
//
//     cout << "Area = " << b.calculate(b) << endl; // Fixed missing semicolon
//     return 0;
// }
//In C++ the data hiding is a core principal of object oriented prog .The Private members cant be accessed outside the class and the protected
//members have limited access so in order to have the controlled external access private data we use friend function

//Friend function is a function that is given a special access to a class private and protected members by declaring it a friend inside the class
//.A friend function is declared inside the class but defined outside making it different from regular function .It allows external function to
//interact with private data without making them part of the class itself

//
// #include<iostream>
// using namespace std;
// class rect {
// private:
//     int width, height;
// public:
//     rect(int a , int b) {
//         width = a;
//         height = b;
//     }
//     int area(rect r);
// };
// int rect::area(rect r) {
//     cout<<r.width*r.height<<endl;
//
// }
// int main() {
//     rect r(10,20);
//     r.area(r);
//     return 0;
// }

#include<iostream>
using namespace std;
class B;
class A {
private:
    int a ;
public:
    A(int x) {
        a=x;
    }
    friend void add(A,B);


};
class B {
    private:
    int b;
    public:
    B(int x) {
        b=x;
    }
    friend void add(A,B);
};
void add(A abj1 , B abj2) {
    cout<<"sum="<<abj1.a+abj2.b<<endl;
}
int main() {
    A abj1(2);
    B abj2(3);
    add(abj1,abj2);
    return 0;
}