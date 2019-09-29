#include <stdio.h>

void inPut(int& a) {
	printf("Nhap so n: "); scanf_s("%d", &a);
}

void outPut(int result) {
	printf("Ket qua sau khi tri tuyet doi la: %d", result); 
}

int checkingNumber(int n) {
	if (n < 0) n = n * (-1);
	else n = n*1; 
	return n;
}
void main() {
	int n;
	inPut(n);
	int result = checkingNumber(n);
	outPut(result);
}