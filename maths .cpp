#include<iostream>
using namespace std;

class area {
private:
    float leng;
    float bre;
    float rad;
    float arear;
    float areac;

public:
    area(float l, float b) {
        leng = l;
        bre = b;
        arear = leng * bre;
        cout << "Area of Rectangle = " << arear << endl;
    }
    area(float r) {
        rad = r;
        areac = 4 * 3.14 * rad * rad;
        cout << "Surface Area of Sphere = " << areac << endl;
    }
    ~area() {
        cout << "Destructor called. Object destroyed." << endl;
    }
};

int main() {
    float l, b, r;

    cout << "Enter length of Rectangle: ";
    cin >> l;
    cout << "Enter breadth of Rectangle: ";
    cin >> b;
    cout << "Enter radius of Sphere: ";
    cin >> r;

    cout << "\n--- Rectangle ---" << endl;
    area obj1(l, b);

    cout << "\n--- Sphere ---" << endl;
    area obj2(r);

    return 0;
}