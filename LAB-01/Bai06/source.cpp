#include <iostream>
using namespace std;

struct Ngay {
	int ng;
	int th;
	int nm;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);
bool kt_nam_nhuan(NGAY);
long stt(NGAY);
int stt_trong_nam(NGAY);

NGAY tim_ngay(long);
NGAY tim_ngay_ke_tiep(NGAY);
NGAY tim_ngay_trong_nam(int, int);

int main() {
	NGAY x;
	cout << "Nhap ngay hien tai: " << endl;
	Nhap(x);

	cout << "Ngay ke tiep la: ";
	NGAY kq = tim_ngay_ke_tiep(x);
	Xuat(kq);
}

void Nhap(NGAY& x) {
	cout << "Nhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
}

void Xuat(NGAY x) {
	cout << x.ng << "/" << x.th << "/" << x.nm;
}

bool kt_nam_nhuan(NGAY x) {
	return (x.nm % 400 == 0 || (x.nm % 4 == 0 && x.nm % 100 != 0));
}

long stt(NGAY x) {
	long stt = 0;
	for (int i = 1; i < x.nm; i++) {
		stt += 365;
		NGAY temp = { 1,1,i };
		if (kt_nam_nhuan(temp)) stt++;
	}
	return stt + stt_trong_nam(x);
}

int stt_trong_nam(NGAY x) {
	int stt = 0;
	int so_ngay[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (kt_nam_nhuan(x)) so_ngay[1] = 29;
	for (int i = 1; i < x.th; i++) stt += so_ngay[i - 1];
	return stt + x.ng;
}

NGAY tim_ngay(long stt) {
	int nam = 1;
	int soNgay = 365;
	while (stt - soNgay > 0) {
		stt -= soNgay;
		nam++;
		NGAY temp = { 1,1,nam };
		if (kt_nam_nhuan(temp)) soNgay = 366;
		else soNgay = 365;
	}

	return tim_ngay_trong_nam(stt, nam);
}

NGAY tim_ngay_trong_nam(int stt, int nam) {
	int so_ngay[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	NGAY temp = { 1,1,nam };
	if (kt_nam_nhuan(temp)) so_ngay[1] = 29;

	temp.th = 1;
	while (stt - so_ngay[temp.th - 1] > 0) {
		stt -= so_ngay[temp.th - 1];
		temp.th++;
	}
	temp.ng = stt;
	return temp;
}

NGAY tim_ngay_ke_tiep(NGAY x) {
	long stt_hien_tai = stt(x);
	return tim_ngay(stt_hien_tai + 1);
}