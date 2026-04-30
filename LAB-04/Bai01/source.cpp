#include <iostream>
#include "CHonSo.h"
using namespace std;

int main() {
    CHonSo a, b;

    cout << "Nhap hon so a (dang a b/c): ";
    cin >> a;

    cout << "Nhap hon so b (dang a b/c): ";
    cin >> b;

    cout << "\n=== XUAT ===\n";
    cout << "a = " << a;
    cout << "b = " << b;

    /* Toan tu so hoc */
    cout << "== TOAN TU SO HOC (+, -, *, /) ==" << endl;
    cout << "a + b = " << (a + b);
    cout << "a - b = " << (a - b);
    cout << "a * b = " << (a * b);
    cout << "a / b = " << (a / b);

    cout << "== TOAN TU SO HOC (+=, -=, *=, /=) ==" << endl;
    CHonSo c = a;

    c += b;
    cout << "a += b: " << c;

    c = a;
    c -= b;
    cout << "a -= b: " << c;

    c = a;
    c *= b;
    cout << "a *= b: " << c;

    c = a;
    c /= b;
    cout << "a /= b: " << c;

    cout << "== TOAN TU SO HOC (++, --) ==" << endl;
    CHonSo d = a;

    cout << "++a = " << ++d;
    cout << "a++ = " << d++;
    cout << "Sau a++: " << d;

    cout << "--a = " << --d;
    cout << "a-- = " << d--;
    cout << "Sau a--: " << d;

    /* Toan tu so sanh */
    cout << "== TOAN TU SO SANH ==" << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;

    /* Phep gan*/
    cout << "== PHEP GAN ==" << endl;
    CHonSo e;
    e = a;
    cout << "e = a: " << e;

    return 0;
}