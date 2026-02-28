//
// Created by Tanish Sharma on 28-02-2026.
//
#include<iostream>
using namespace std;
class employee {
    public:
    string name;
    string dept;
    int id;
    int sal;
    employee(string w, string x, int y , int z) {
        name = w;
        dept = x;
        id = y;
        sal = z;
    };
};
int main() {
    employee e1("Tanish","B-Tech",12344,34567);
    employee e2("Ramash","Bio-Tech",12333,7654);
    cout<<e1.name<<" "<<e1.dept<<" "<<e1.id<<" "<<e1.sal<<"\n"<<endl;
    cout<<e2.name<<" "<<e2.dept<<" "<<e2.id<<" "<<e2.sal<<"\n"<<endl;
    return 0;
}