//
// Created by Tanish Sharma on 21-04-2026.
//
#include<iostream>
using namespace std;
// class sum {
//     int b ;
// public:
//     void getdata(int x) {
//         b=x;
//     }
//     int display() {
//         return b;
//     }
// };
// int main() {
//     sum obj;
//     sum *ptr = &obj;
//     obj.getdata(5);
//     cout << obj.display();
//     return 0;
// }
class base {
public:
    void show() {//use virtual for the derived class
        cout<<"I am base"<<endl;

    }
};
class derived : public base {
    public:
    void show() {
        cout<<"I am derived"<<endl;
    }
};
int main() {
    base *p;
    derived obj;
    p = &obj;
    p->show();
    return 0;
}
//1)  A c++ virtual function is a member function in tha base class that you redefine in a derived class. It this declared using the virtual keyword
//2)  It is ued to tell the compiler to perform dynamic linkage or late binding on the function.
//3)  There is a necessity to use the single pointer to refer to all the objects of the different classes. So we create the pointer to the base class
// that refers to all the derived objects but when base class pointer contains the address of the derived class object it always execute the base class
// function so this issue can only be resolved only using the virtual function.
//4)  When the function is made virtual the c++ determines which function is to be invoke at the runtime based on the type og the obj pointed by the ase class pointer