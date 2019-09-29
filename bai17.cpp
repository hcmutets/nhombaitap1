#include <stdio.h>

void inPut(double& a) {
	printf("Give me the my number: "); scanf_s("%lf", &a);
}

void outPut(double a) {
	printf("Result after rounding number: %.0lf", a);
}

int main() {
	double a;
	inPut(a);
	outPut(a);
}