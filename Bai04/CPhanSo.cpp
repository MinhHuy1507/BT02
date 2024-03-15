#include "CPhanSo.h"
#include <iostream>
#include <cmath>

using namespace std;

void CPhanSo::Nhap()
{
	cout << "\nNhap Tu: ";
	cin >> Tu;
	cout << "Nhap Mau: ";
	cin >> Mau;
}

void CPhanSo::Xuat()
{
	cout << Tu << "/" << Mau << endl;
}

void CPhanSo::RutGon()
{
	int a = abs(Tu);
	int b = abs(Mau);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	Tu = Tu / (a + b);
	Mau = Mau / (a + b);
}

CPhanSo CPhanSo::Tong(CPhanSo ps)
{
	CPhanSo temp{};
	temp.Tu = Tu * ps.Mau + ps.Tu * Mau;
	temp.Mau = Mau * ps.Mau;
	return temp;
}

CPhanSo CPhanSo::Hieu(CPhanSo ps)
{
	CPhanSo temp{};
	temp.Tu = Tu * ps.Mau - ps.Tu * Mau;
	temp.Mau = Mau * ps.Mau;
	return temp;
}

CPhanSo CPhanSo::Tich(CPhanSo ps)
{
	CPhanSo temp{};
	temp.Tu = Tu * ps.Tu;
	temp.Mau = Mau * ps.Mau;
	return temp;
}

CPhanSo CPhanSo::Thuong(CPhanSo ps)
{
	CPhanSo temp{};
	temp.Tu = Tu * ps.Mau;
	temp.Mau = Mau * ps.Tu;
	return temp;
}