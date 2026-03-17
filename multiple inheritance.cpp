#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;
    int speed;
    void getdata() {
        cout<<"Enter brand name:";
        cin>>brand;
        cout<<"Enter speed:";
        cin>>speed;
    }
};

class Fuel {
public:
    string fueltype;
    int mileage;
    void getdata1() {
        cout<<"Enter fuel type:";
        cin>>fueltype;
        cout<<"Enter mileage:";
        cin>>mileage;
    }
};

class Car : public Vehicle, public Fuel {
public:
    int Nos;
    void getdata2() {
        cout<<"Enter number of seats: ";
        cin>>Nos;
    }
    void display() {
        cout<<"Brand:"<< brand<<"\n";
        cout<<"Speed:"<< speed<<"\n";
        cout<<"Fuel Type: "<< fueltype<<"\n";
        cout<<"Mileage:"<< mileage<<"\n";
        cout<<"Seats:"<< Nos<< "\n";
    }
};

int main() {
    Car obj;
    obj.getdata();
    obj.getdata1();
    obj.getdata2();
    obj.display();
    return 0;
}