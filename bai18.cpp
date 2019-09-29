#include <stdio.h> 

void inPut(int& a, int& b) {
	printf("Give me the fist number: "); scanf_s("%d", &a);
	printf("Give me the second number: "); scanf_s("%d", &b);
}

int checkTwoNumber(int a, int b) {
	if (b != 0) return 1;
	else return 0;
}

int main() {
	int a, b;
	inPut(a, b);
	if (checkTwoNumber(a, b) == 1) printf("%d / %d = %f", a, b, float(a) / float(b));
	else printf("Vi mau bang khong nen khong the thuc hien....");
}