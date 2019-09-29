#include <stdio.h>

void inPut(int& a, int& b, int& c) {
	printf("Nhap do dai dau tien: "); scanf_s("%d", &a);
	printf("Nhap do dai thu hai: "); scanf_s("%d", &b);
	printf("Nhap do dai thu ba: "); scanf_s("%d", &c);
}

int checkTriangle(int a, int b, int c) {
	if ((a + b > c) && (b + c > a) && (a + c > b) && (a != 0) && (b != 0) && (c != 0)) return 1;
	else return 0;
}

int main() {
	int a, b, c;
	inPut(a, b, c);
	if (checkTriangle(a, b, c) == 1) printf("Bo ba so ban vua nhap co the tao thanh tam giac");
	else printf("Bo ba so ban vua nhap khong the tao thanh tam giac");
}
/* Điều kiện để tạo ra bộ 3 tam giác khi 
	- a+b>c
	- b+c>a
	- c+a>b
	- Tất cả các cạch đều khác 0
*/