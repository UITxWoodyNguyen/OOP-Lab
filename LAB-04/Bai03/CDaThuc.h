#pragma once
#include <iostream>
using namespace std;

class CDaThuc {
	private:
		int bac;
		float* a;

	public:
		CDaThuc();
		CDaThuc(float*, int);
		CDaThuc(const CDaThuc&);
		~CDaThuc();

		friend istream& operator>> (istream&, CDaThuc&);
		friend ostream& operator<< (ostream&, const CDaThuc&);

		CDaThuc operator+ (CDaThuc);
		CDaThuc operator- (CDaThuc);
		CDaThuc operator* (CDaThuc);
		CDaThuc operator/ (CDaThuc);

		CDaThuc& operator+= (const CDaThuc&);
		CDaThuc& operator-= (const CDaThuc&);
		CDaThuc& operator*= (const CDaThuc&);
		CDaThuc& operator/= (const CDaThuc&);

		bool operator== (const CDaThuc&) const;
		bool operator!= (const CDaThuc&) const;

		CDaThuc& operator= (const CDaThuc&);
};

