#include "CTime.h"

CTime::CTime() {
	gio = 0;
	phut = 0;
	giay = 0;
}

CTime::CTime(int gio, int phut, int giay) {
	this->gio = gio;
	this->phut = phut;
	this->giay = giay;
}

istream& operator>> (istream& inp, CTime& tg) {
	inp >> tg.gio >> tg.phut >> tg.giay;
	return inp;
}

ostream& operator<< (ostream& out, const CTime& tg) {
	out << tg.gio << ":" << tg.phut << ":" << tg.giay;
	return out;
}

int CTime::ChuyenThanhGiay() const {
	return gio * 3600 + phut * 60 + giay;
}

CTime CTime::ChuyenGiayThanhTime(int s) {
	int g = s / 3600;
	s %= 3600;
	int p = s / 60;
	s %= 60;
	return CTime(g, p, s);
}

CTime& CTime::ChuanHoa() {
	int tong = gio * 3600 + phut * 60 + giay;
	tong = ((tong % 86400) + 86400) % 86400;

	gio = tong / 3600;
	tong %= 3600;
	phut = tong / 60;
	giay = tong % 60;

	return *this;
}

CTime CTime::operator+ (int x) const {
	int temp = ChuyenThanhGiay();
	temp += x;
	CTime kq = ChuyenGiayThanhTime(temp);
	return kq.ChuanHoa();
}

CTime CTime::operator- (int x) const {
	int temp = ChuyenThanhGiay();
	temp -= x;
	CTime kq = ChuyenGiayThanhTime(temp);
	return kq.ChuanHoa();
}

// prefix ++
CTime& CTime::operator++ () {
	int temp = ChuyenThanhGiay();
	temp += 1;

	CTime kq = ChuyenGiayThanhTime(temp);
	kq.ChuanHoa();

	*this = kq;
	return *this;
}

// postfix ++
CTime CTime::operator++ (int) {
	CTime temp = *this;
	++(*this);
	return temp;
}

// prefix --
CTime& CTime::operator-- () {
	int temp = ChuyenThanhGiay();
	temp -= 1;
	CTime kq = ChuyenGiayThanhTime(temp);
	kq.ChuanHoa();

	*this = kq;
	return *this;
}

// postfix --
CTime CTime::operator-- (int) {
	CTime temp = *this;
	--(*this);
	return temp;
}