#include "CTamGiac.h"
#include "CDiem.h"
#include <iostream>

using namespace std;

void CTamGiac::Nhap()
{
	cout << "Nhap diem A: ";
	A.Nhap();
	cout << "\nNhap diem B: ";
	B.Nhap();
	cout << "\nNhap diem C: ";
	C.Nhap();
}

void CTamGiac::Xuat()
{
	cout << "\nDinh A: ";
	A.Xuat();
	cout << "\nDinh B: ";
	B.Xuat();
	cout << "\nDinh C: ";
	C.Xuat();
}

float CTamGiac::ChuVi()
{
	float AB = A.KhoangCach(B);
	float AC = A.KhoangCach(C);
	float BC = B.KhoangCach(C);
	return AB + AC + BC;
}

float CTamGiac::DienTich()
{
	float AB = A.KhoangCach(B);
	float AC = A.KhoangCach(C);
	float BC = B.KhoangCach(C);
	float P = ChuVi() / 2;
	return sqrt(P * (P - AB) * (P - AC) * (P - BC));
}