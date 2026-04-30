#include <iostream>
#include "CTime.h"
using namespace std;

int main() {
    CTime a, b;

    cout << "Nhap thoi diem a (gio phut giay): ";
    cin >> a;

    cout << "Nhap thoi diem b (gio phut giay): ";
    cin >> b;

    cout << "\n=== XUAT ===\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    /* Toan tu so hoc */
    cout << "\n== TOAN TU +, - (them/bot giay) ==" << endl;
    cout << "a + 3600 = " << (a + 3600) << " (them 1 gio)" << endl;
    cout << "b - 60   = " << (b - 60) << " (bot 1 phut)" << endl;

    /* Toan tu tang giam */
    cout << "\n== TOAN TU ++, -- ==" << endl;

    CTime c = a;
    cout << "c = a: " << c << endl;

    cout << "++c = " << ++c << " (prefix ++)" << endl;
    cout << "c++ = " << c++ << " (postfix ++)" << endl;
    cout << "sau c++: " << c << endl;

    cout << "--c = " << --c << " (prefix --)" << endl;
    cout << "c-- = " << c-- << " (postfix --)" << endl;
    cout << "sau c--: " << c << endl;

    return 1;
}