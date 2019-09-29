#include <stdio.h>

void inPut(int& a, int& b) {
	printf("Nhap so dau tien: "); scanf_s("%d", &a);
	printf("Nhap so thu hai: "); scanf_s("%d", &b);
}

void outPut(int result) {
	printf("Ket qua la: %d", result);
}

int findMax(int a, int b) {
	if (a < b) return b;
	else return a;
	if (a = b) return a;
}

void main() {
	int a, b;
	inPut(a, b);
	outPut(findMax(a, b));
}