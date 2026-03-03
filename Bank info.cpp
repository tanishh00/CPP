//
// Created by Tanish Sharma on 03-03-2026.
//
#include <iostream>
using namespace std;

class bankde {
private:
    int acno;
    string hname;
    int balance;
    string acctype;

public:
    bankde(int w, string x, int y, string z) {
        acno = w;
        hname = x;
        balance = y;
        acctype = z;
    }
    int getAcno() { return acno; }
    string getName() { return hname; }
    int getBalance() { return balance; }
    string getType() { return acctype; }
    ~bankde() {
        cout << "Bank Account Closed for " << hname << endl;
    }
};
int main() {
    int a, c;
    string b, d;
    cout << "ACC Number: ";
    cin >> a;
    cout << "Holder name: ";
    cin >> b;
    cout << "Balance: ";
    cin >> c;
    cout << "Account Type: ";
    cin >> d;
    bankde e1(a, b, c, d);
    cout << e1.getAcno() << " "
         << e1.getName() << " "
         << e1.getBalance() << " "
         << e1.getType() << endl;
    return 0;
}