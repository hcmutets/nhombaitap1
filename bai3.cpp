#include <stdio.h>

void inPut(int& a, int& b) {
	printf("Nhap chieu dai: "); scanf_s("%d", &a);
	printf("Nhap chieu rong: "); scanf_s("%d", &b);
}

void outPut(int result) {
	printf("Chu vi hinh chu nhat la: %d", result);
}

int perimeter(int a, int b) {
	return (a + b) * 2;
}
void main() {
	int a, b;
	inPut(a, b);
	outPut(perimeter(a, b)); 
}