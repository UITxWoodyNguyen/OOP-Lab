#include "CSoPhuc.h"

void CSoPhuc::Xuat() {
	cout << thuc << " + " << ao << "i" << endl;
}

void CSoPhuc::Nhap() {
	cout << "Phan thuc = ";
	cin >> thuc;
	cout << "Phan ao = ";
	cin >> ao;
}

CSoPhuc CSoPhuc::tong(CSoPhuc o) {
	CSoPhuc kq;
	kq.thuc = thuc + o.thuc;
	kq.ao = ao + o.ao;
	return kq;
}

CSoPhuc CSoPhuc::hieu(CSoPhuc o) {
	CSoPhuc kq;
	kq.thuc = thuc - o.thuc;
	kq.ao = ao - o.ao;
	return kq;
}

CSoPhuc CSoPhuc::tich(CSoPhuc o) {
	CSoPhuc kq;
	kq.thuc = thuc * o.thuc - ao * o.ao;
	kq.ao = thuc * o.ao + ao * o.thuc;
	return kq;
}

CSoPhuc CSoPhuc::thuong(CSoPhuc o) {
	CSoPhuc kq;
	double msc = o.thuc * o.thuc + o.ao * o.ao;

	if (msc == 0) {
		kq.thuc = 0;
		kq.ao = 0;
	}
	else {
		kq.thuc = (thuc * o.thuc + ao * o.ao) / msc;
		kq.ao = (ao * o.thuc - thuc * o.ao) / msc;
	}

	return kq;
}