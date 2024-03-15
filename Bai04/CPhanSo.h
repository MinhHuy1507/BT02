#pragma once
class CPhanSo
{
private:
	int Tu;
	int Mau;
public:
	void Nhap();
	void Xuat();
	void RutGon();
	CPhanSo Tong(CPhanSo);
	CPhanSo Hieu(CPhanSo);
	CPhanSo Tich(CPhanSo);
	CPhanSo Thuong(CPhanSo);
};

