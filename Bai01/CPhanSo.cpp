#include "CPhanSo.h"
#include <iostream>

using namespace std;

void CPhanSo::Nhap()
{
	cout << "Nhap Tu: ";
	cin >> Tu;
	cout << "Nhap Mau: ";
	cin >> Mau;
}

void CPhanSo::Xuat()
{
	cout << Tu << "/" << Mau;
}

int CPhanSo::KtPhanSo()
{
	if (Tu * Mau > 0)
		return 1;
	if (Tu * Mau < 0)
		return -1;
	return 0;
}