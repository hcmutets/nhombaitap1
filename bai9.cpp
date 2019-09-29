#include <stdio.h>

void inPut(int& a) {
	printf("Nhap so nam can kiem tra: "); scanf_s("%d", &a);
}

int checkLeapYear(int a) {
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) return 1;
	else return 2;
}

int main() {
	int a;
	inPut(a);
	if (checkLeapYear(a) == 1) printf("Nam ban vua nhap la nam nhuan....");
	else printf("Nam ban vua nhap khong phai la nam nhuan....");
}