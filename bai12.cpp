#include <stdio.h>

void inPut(float& a, float& b, float& c, float& d) {
	printf("Nhap so dau tien: "); scanf_s("%f", &a);
	printf("Nhap so thu hai: "); scanf_s("%f", &b);
	printf("Nhap so thu ba: "); scanf_s("%f", &c);
	printf("Nhap so thu tu: "); scanf_s("%f", &d);
}

void outPut(float result) {
	printf("So lon nhat trong bon so la: %.2f", result);
}

int checkMax(float a, float b, float c, float d) {
	float max1 = a;
	float max2 = c;
	float max = max1;
	if (max1 < b) max1 = b;
	if (max2 < d) max2 = d;
	if (max2 > max) max = max2;
	else max = max1;
	return max;
}

int main() {
	float a, b, c, d;
	inPut(a, b, c, d);
	float result = checkMax(a, b, c, d);
	outPut(result);
}