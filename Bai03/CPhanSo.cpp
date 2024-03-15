#include "CPhanSo.h"
#include <iostream>

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
	cout << Tu << "/" << Mau;
}

int CPhanSo::SoSanh(CPhanSo P)
{
	float a = (float)Tu / Mau;
	float b = (float)P.Tu / P.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}