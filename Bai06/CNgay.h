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
	long SoThuTu();
	int STTTrongNam();
	CNgay TimNgay(long);
	CNgay TimNgay(int, int);
	CNgay TimNgayKeTiep();
};

