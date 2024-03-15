#pragma once
class CNgay
{
private:
	int Ngay;
	int Thang;
	int Nam;
public :
	void Nhap();
	void Xuat();
	int KtNamNhuan();
	int STTTrongNam();
	long SoThuTu();
	CNgay TimNgay(int, int);
	CNgay TimNgay(long);
	CNgay TimNgayHomQua();
};

