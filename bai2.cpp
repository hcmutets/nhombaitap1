#include <stdio.h>

void inPut(int& a, int& b) {
	printf("Nhap so dau tien: "); scanf_s("%d", &a);
	printf("Nhap so thu hai: "); scanf_s("%d", &b);
}

void outPut(int result) {
	printf("Ket qua la: %d", result);
}

int sum(int a, int b) {
	return a + b;
}

void main() {
	int a, b;
	inPut(a, b);
	outPut(sum(a, b));
}