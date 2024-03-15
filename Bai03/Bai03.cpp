#include <iostream>
#include "CPhanSo.h"

using namespace std;

int main()
{
	CPhanSo ps1{}, ps2{};
	cout << "Nhap phan so thu 1: ";
	ps1.Nhap();
	ps1.Xuat();
	cout << "\nNhap phan so thu 2: ";
	ps2.Nhap();
	ps2.Xuat();
	cout << endl;

	int kq = ps1.SoSanh(ps2);
	switch (kq)
	{
	case 1:
		cout << "Phan so thu 1 lon hon";
		break;
	case -1:
		cout << "Phan so thu 2 lon hon";
		break;
	case 0:
		cout << "2 phan so bang nhau";
	}

	return 0;
}