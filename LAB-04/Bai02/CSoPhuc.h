#pragma once
#include <iostream>
using namespace std;

class CSoPhuc {
	private:
		double thuc;
		double ao;

	public:
		CSoPhuc();
		CSoPhuc(double, double);

		friend istream& operator>> (istream&, CSoPhuc&);
		friend ostream& operator<< (ostream&, const CSoPhuc&);

		double BinhPhuongModule() const;

		CSoPhuc operator+ (CSoPhuc);
		CSoPhuc operator- (CSoPhuc);
		CSoPhuc operator* (CSoPhuc);
		CSoPhuc operator/ (CSoPhuc);

		CSoPhuc& operator+= (const CSoPhuc&);
		CSoPhuc& operator-= (const CSoPhuc&);
		CSoPhuc& operator*= (const CSoPhuc&);
		CSoPhuc& operator/= (const CSoPhuc&);

		bool operator> (CSoPhuc&) const;
		bool operator>= (CSoPhuc&) const;
		bool operator< (CSoPhuc&) const;
		bool operator<= (CSoPhuc&) const;
		bool operator== (CSoPhuc&) const;
		bool operator!= (CSoPhuc&) const;

		CSoPhuc& operator= (CSoPhuc&);
};

