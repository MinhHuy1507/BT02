#define _USE_MATH_DEFINES
#include "CDuongTron.h"
#include "CDiem.h"
#include <iostream>

using namespace std;

void CDuongTron::Nhap()
{
	cout << "Nhap tam duong tron: ";
	I.Nhap();
	cout << "Nhap ban kinh duong tron: ";
	cin >> R;
}

void CDuongTron::Xuat()
{
	cout << "Tam duong tron: ";
	I.Xuat();
	cout << "\nBan kinh duong tron = " << R;
}

float CDuongTron::ChuVi()
{
	return 2 * M_PI * R;
}

float CDuongTron::DienTich()
{
	return M_PI * R * R;
}