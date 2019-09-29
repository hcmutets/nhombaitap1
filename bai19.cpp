#include <stdio.h> 

void inPut(int& a, int& b) {
	printf("Give me the fist number: "); scanf_s("%d", &a);
	printf("Give me the second number: "); scanf_s("%d", &b);
}

int checkTwoNumber(int a, int b) {
	if (a != 0) return 1;
	else return 0;
}

int main() {
	int a, b;
	inPut(a, b);
	if (checkTwoNumber(a, b) == 1) printf("%d . x + %d = 0 ==> x = - %d / %d = %.3f ", a, b, b, a, - ( float(b) / float(a)));
	else printf("Vi mau bang khong nen khong the thuc hien....");
}