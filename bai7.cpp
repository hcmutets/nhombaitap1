#include <stdio.h>

void inPut(float& a) {
	printf("Nhap so can tim: ");
	scanf_s("%f", &a);
}


void roundingNumberdown(float a) {
	float t = a / 1;

	printf("Ket qua sau khi thuc hien la: %d", (int)t); 
}

int main() {
	float a;
	inPut(a);
	roundingNumberdown(a);
}

// Vẫn chưa hiểu lắm. UwU