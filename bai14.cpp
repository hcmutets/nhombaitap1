#include <stdio.h> 

void inPut(int& a, int& b, int& c) {
	printf("Nhap so thu nhat: "); scanf_s("%d", &a);
	printf("Nhap so thu hai: "); scanf_s("%d", &b);
	printf("Nhap so thu ba: "); scanf_s("%d", &c);
}

void outPut(int result) {
	printf("So nho nhi trong ba so la: %d", result);
}

int findMax(int a, int b, int c) {
	int max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	return max;
}

int findMin(int a, int b, int c) {
	int min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	return min;
}

void main() {
	int a, b, c;
	inPut(a, b, c);
	int max = findMax(a, b, c);
	int min = findMin(a, b, c);
	int sum = a + b + c;
	int result = sum - max - min;
	outPut(result);
}