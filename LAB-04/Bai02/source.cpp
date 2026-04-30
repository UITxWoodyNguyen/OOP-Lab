#include <iostream>
#include "CSoPhuc.h"
using namespace std;

int main() {
    CSoPhuc a, b;

    cout << "Nhap so phuc a (thuc ao): ";
    cin >> a;

    cout << "Nhap so phuc b (thuc ao): ";
    cin >> b;

    cout << "\n=== XUAT ===\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    /* Toan tu so hoc */
    cout << "== TOAN TU SO HOC (+, -, *, /) ==" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;

    cout << "== TOAN TU SO HOC (+=, -=, *=, /=) ==" << endl;
    CSoPhuc c = a;

    c += b;
    cout << "a += b: " << c << endl;

    c = a;
    c -= b;
    cout << "a -= b: " << c << endl;

    c = a;
    c *= b;
    cout << "a *= b: " << c << endl;

    c = a;
    c /= b;
    cout << "a /= b: " << c << endl;

    /* Toan tu so sanh */
    cout << "== TOAN TU SO SANH ==" << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;

    /* Phep gan */
    cout << "== PHEP GAN ==" << endl;
    CSoPhuc e;
    e = a;
    cout << "e = a: " << e << endl;

    return 1;
}