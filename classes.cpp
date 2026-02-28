// //
// // Created by Tanish Sharma on 20-02-2026.
// #include <iostream>
// using namespace std;
//
// class item {
// private:
//     int cost;
//     float fare;
// public:
//     void getdata(int a, float b) {
//         cost = a;
//         fare = b;
//     }
//     void putdata(void) {
//         cout << "Cost: " << cost << ", Fare: " << fare << endl;
//     }
// } x, y, z;
//
// int main() {
//     item i1;
//     i1.getdata(10, 20.5);
//     i1.putdata();
//     return 0;
// }
#include <iostream>
using namespace std;
class student {
private:
    string name;
    int rollno;
    float marks[5];
    float average;
public:
    void getdata() {
        cout<<"Enter name: ";
        getline(cin, name);
        cout<<"Enter rollno: ";
        cin>>rollno;
        cout<<"Enter marks of 5 subs:\n ";
        for(int i=0; i<5; i++) {
            cout<<"Subject"<<i+1<<": ";
            cin>>marks[i];
        }
    }
    void avg() {
        float sum = 0;
        for(int i=0; i<5; i++) {
            sum += marks[i];

        }
        average = sum/5;
    }
    void display() {
        cout<<"Name: "<<name<<endl;
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Avg Marks: "<<average<<endl;
    }

};

int main() {
    student val;
    val.getdata();
    val.avg();
    val.display();
    return 0;
}

