#include<iostream>
using namespace std;

class rsa {
private:
    float leng;
    float bre;
    float red;
    float arear;
    float areac;

public:
    rsa(float l, float b) {
        leng = l;
        bre = b;
    }

    void rect() {
        arear = leng * bre;
        cout<<"Area of Rectangle = "<<arear<<endl;
    }
    void area(float r) {
        red = r;
    }

    void sph() {
        areac = 4 * 3.14 * red * red;
        cout<<"Surface Area of Sphere = "<<areac<<endl;
    }

    ~rsa() {
        cout<<"Destructor called. Object destroyed."<<endl;
    }
};

int main() {
    float a,d,c;
    cout<<"Enter length: ";
    cin>>a;
    cout<<"Enter breadth: ";
    cin>>d;
    cout<<"Enter radius: ";
    cin>>c;
    rsa val(a,d);
    val.rect();
    val.area(c);
    val.sph();
    return 0;
}