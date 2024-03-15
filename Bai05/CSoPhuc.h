#pragma once
class CSoPhuc
{
private:
	int Thuc;
	int Ao;
public:
	void Nhap();
	void Xuat();
	CSoPhuc Tong(CSoPhuc);
	CSoPhuc Hieu(CSoPhuc);
	CSoPhuc Tich(CSoPhuc);
	CSoPhuc Thuong(CSoPhuc);
};

