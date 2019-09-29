#include <stdio.h>

void inPut(int &h, int& m, int &s) {
	printf("Nhap gio: "); scanf_s("%d", &h);
	printf("Nhap phut: "); scanf_s("%d", &m);
	printf("Nhap giay: "); scanf_s("%d", &s);
}

int checkingClock(int h, int m, int s) {
	if ((h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59)) return 1;
}

int main() {
	int h, m, s;
	inPut(h, m, s);
	if (checkingClock(h, m, s) == 1) printf("Gio phut giay ban nhap co the lap thanh mot bo gio phut giay hop le");
	else printf("Gio phut giay ban nhap khong the lap thanh mot bo gio phut giay");
}

/*
Điều kiện để h,m,s tạo thành 1 bộ giờ phút giây hợp lệ khi
	- Giờ không quá 23h và có thể bằng 0h
	- Phút không quá 59 phút và có thể bằng 0 phút
	- Giây không quá 59s và có thể bằng 0s
*/