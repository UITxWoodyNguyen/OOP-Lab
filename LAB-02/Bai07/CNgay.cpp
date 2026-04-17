#include "CNgay.h"

void Ngay::Nhap() {
	cout << "Nhap ngay: ";
	cin >> ng;
	cout << "Nhap thang: ";
	cin >> th;
	cout << "Nhap nam: ";
	cin >> nm;
}

void Ngay::Xuat() {
	cout << ng << "/" << th << "/" << nm;
}

bool Ngay::kt_nam_nhuan() {
	return (nm % 400 == 0 || (nm % 4 == 0 && nm % 100 != 0));
}

long Ngay::stt() {
	long stt = 0;
	for (int i = 1; i < nm; i++) {
		stt += 365;
		Ngay temp;
		temp.ng = 1;
		temp.th = 1;
		temp.nm = i;
		if (temp.kt_nam_nhuan()) stt++;
	}
	return stt + stt_trong_nam();
}

int Ngay::stt_trong_nam() {
	int stt = 0;
	int so_ngay[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (kt_nam_nhuan()) so_ngay[1] = 29;
	for (int i = 1; i < th; i++) stt += so_ngay[i - 1];
	return stt + ng;
}

Ngay Ngay::tim_ngay(long thutu) {
	int nam = 1;
	int soNgay = 365;

	while (thutu - soNgay > 0) {
		thutu -= soNgay;
		nam++;
		Ngay temp;
		temp.ng = 1;
		temp.th = 1;
		temp.nm = nam;
		if (temp.kt_nam_nhuan()) soNgay = 366;
		else soNgay = 365;
	}

	return tim_ngay_trong_nam(thutu, nam);
}

Ngay Ngay::tim_ngay_trong_nam(int stt, int nam) {
	int so_ngay[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	Ngay temp;
	temp.ng = 1;
	temp.th = 1;
	temp.nm = nam;

	if (temp.kt_nam_nhuan()) so_ngay[1] = 29;
	temp.th = 1;
	while (stt - so_ngay[temp.th - 1] > 0) {
		stt -= so_ngay[temp.th - 1];
		temp.th++;
	}
	temp.ng = stt;
	return temp;
}

Ngay Ngay::tim_ngay_hom_qua() {
	long stt_hien_tai = stt();
	stt_hien_tai--;
	return tim_ngay(stt_hien_tai);
}