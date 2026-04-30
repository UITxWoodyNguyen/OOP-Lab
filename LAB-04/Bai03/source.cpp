#include <iostream>
#include "CDaThuc.h"
using namespace std;

int main() {
    CDaThuc a, b;

    cout << "Nhap da thuc a (bac + he so tu cao -> thap): " << endl;
    cin >> a;

    cout << "Nhap da thuc b (bac + he so tu cao -> thap): " << endl;
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
    CDaThuc c = a;

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
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;

    /* Phep gan */
    cout << "== PHEP GAN ==" << endl;
    CDaThuc e;
    e = a;
    cout << "e = a: " << e << endl;

    return 1;
}