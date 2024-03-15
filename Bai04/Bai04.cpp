#include <iostream>
#include "CPhanSo.h"

using namespace std;

int main()
{
	CPhanSo ps1{};
	cout << "Nhap phan so thu 1: ";
	ps1.Nhap();
	ps1.RutGon();
	ps1.Xuat();

	CPhanSo ps2{};
	cout << "\nNhap phan so thu 2: ";
	ps2.Nhap();
	ps2.RutGon();
	ps2.Xuat();
	
	CPhanSo tong = ps1.Tong(ps2);
	CPhanSo hieu = ps1.Hieu(ps2);
	CPhanSo tich = ps1.Tich(ps2);
	CPhanSo thuong = ps1.Thuong(ps2);

	tong.RutGon();
	hieu.RutGon();
	tich.RutGon();
	thuong.RutGon();

	cout << "\nTong cua 2 phan so = ";
	tong.Xuat();
	cout << "Hieu cua 2 phan so = ";
	hieu.Xuat();
	cout << "Tich cua 2 phan so = ";
	tich.Xuat();
	cout << "Thuong cua 2 phan so = ";
	thuong.Xuat();

	return 0;
}