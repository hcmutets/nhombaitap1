#include <stdio.h>

void inPut(int& a, int& b, int& c) {
	printf("Nhap so dau tien: "); scanf_s("%d", &a);
	printf("Nhap so thu hai: "); scanf_s("%d", &b);
	printf("Nhap so thu ba: "); scanf_s("%d", &c);
}

void outPut(int result) {
	printf("So nho nhat trong ba so ma ban nhap la: %d", result);
}

int findMin(int a, int b, int c) {
	int min = a;
	if (min >= b) min = b;
	if (min >= c) min = c;
	return min;
}

int main() {
	int a, b, c;
	inPut(a, b, c);
	outPut(findMin(a, b, c));
}