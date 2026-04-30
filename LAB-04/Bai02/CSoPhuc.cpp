#include "CSoPhuc.h"

CSoPhuc::CSoPhuc() {
	thuc = 0;
	ao = 0;
}

CSoPhuc::CSoPhuc(double thuc, double ao) {
	this->thuc = thuc;
	this->ao = ao;
}

/* Dinh nghia toan tu Nhap/Xuat */
istream& operator>> (istream& inp, CSoPhuc& sp) {
	inp >> sp.thuc >> sp.ao;
	return inp;
}

ostream& operator<< (ostream& out, const CSoPhuc& sp) {
	out << sp.thuc;
	if (sp.ao > 0) out << "+" << sp.ao << "i";
	else out << "-" << -sp.ao << "i";
	return out;
}

/* Dinh nghia toan tu So hoc */
CSoPhuc CSoPhuc::operator+ (CSoPhuc x) {
	CSoPhuc kq;
	kq.thuc = thuc + x.thuc;
	kq.ao = ao + x.ao;
	return kq;
}

CSoPhuc CSoPhuc::operator- (CSoPhuc x) {
	CSoPhuc kq;
	kq.thuc = thuc - x.thuc;
	kq.ao = ao - x.ao;
	return kq;
}

CSoPhuc CSoPhuc::operator* (CSoPhuc x) {
	CSoPhuc kq;
	kq.thuc = thuc * x.thuc - ao * x.ao;
	kq.ao = thuc * x.ao + ao * x.thuc;
	return kq;
}

CSoPhuc CSoPhuc::operator/ (CSoPhuc x) {
	CSoPhuc kq;
	double msc = x.thuc * x.thuc + x.ao * x.ao;
	if (msc == 0) {
		kq.thuc = 0;
		kq.ao = 0;
	}
	else {
		kq.thuc = (thuc * x.thuc + ao * x.ao) / msc;
		kq.ao = (ao * x.thuc - thuc * x.ao) / msc;
	}
	return kq;
}

CSoPhuc& CSoPhuc::operator+= (const CSoPhuc& x) {
	CSoPhuc kq;
	kq.thuc = thuc + x.thuc;
	kq.ao = ao + x.ao;
	
	*this = kq;
	return *this;
}

CSoPhuc& CSoPhuc::operator-= (const CSoPhuc& x) {
	CSoPhuc kq;
	kq.thuc = thuc - x.thuc;
	kq.ao = ao - x.ao;
	
	*this = kq;
	return *this;
}

CSoPhuc& CSoPhuc::operator*= (const CSoPhuc& x) {
	CSoPhuc kq;
	kq.thuc = thuc * x.thuc - ao * x.ao;
	kq.ao = thuc * x.ao + ao * x.thuc;
	
	*this = kq;
	return *this;
}

CSoPhuc& CSoPhuc::operator/= (const CSoPhuc& x) {
	CSoPhuc kq;
	double msc = x.thuc * x.thuc + x.ao * x.ao;
	if (msc == 0) {
		kq.thuc = 0;
		kq.ao = 0;
	}
	else {
		kq.thuc = (thuc * x.thuc + ao * x.ao) / msc;
		kq.ao = (ao * x.thuc - thuc * x.ao) / msc;
	}
	
	*this = kq;
	return *this;
}

/* Dinh nghia toan tu so sanh */
double CSoPhuc::BinhPhuongModule() const {
	return thuc * thuc + ao * ao;
}

bool CSoPhuc::operator< (CSoPhuc& x) const {
	double temp1 = BinhPhuongModule();
	double temp2 = x.BinhPhuongModule();
	return temp1 < temp2;
}

bool CSoPhuc::operator<= (CSoPhuc& x) const {
	double temp1 = BinhPhuongModule();
	double temp2 = x.BinhPhuongModule();
	return temp1 <= temp2;
}

bool CSoPhuc::operator> (CSoPhuc& x) const {
	double temp1 = BinhPhuongModule();
	double temp2 = x.BinhPhuongModule();
	return temp1 > temp2;
}

bool CSoPhuc::operator>= (CSoPhuc& x) const {
	double temp1 = BinhPhuongModule();
	double temp2 = x.BinhPhuongModule();
	return temp1 >= temp2;
}

bool CSoPhuc::operator== (CSoPhuc& x) const {
	return ((thuc == x.thuc) && (ao == x.ao));
}

bool CSoPhuc::operator!= (CSoPhuc& x) const {
	return ((thuc != x.thuc) || (ao != x.ao));
}

/* Dinh nghia phep gan */
CSoPhuc& CSoPhuc::operator= (CSoPhuc& x) {
	if (this == &x) return *this;

	thuc = x.thuc;
	ao = x.ao;
	return *this;
}