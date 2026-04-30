#pragma once
#include <iostream>
using namespace std;

class CTime {
private:
	int gio;
	int phut;
	int giay;

public:
	CTime();
	CTime(int, int, int);

	// I/O
	friend istream& operator>> (istream&, CTime&);
	friend ostream& operator<< (ostream&, const CTime&);

	int ChuyenThanhGiay() const;
	static CTime ChuyenGiayThanhTime(int);
	CTime& ChuanHoa();

	// Toan tu
	CTime operator+ (int) const;
	CTime operator- (int) const;

	CTime& operator++ ();    // prefix ++
	CTime operator++ (int);  // postfix ++

	CTime& operator-- ();    // prefix --
	CTime operator-- (int);  // postfix --
};