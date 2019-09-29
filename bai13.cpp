#include <stdio.h> 

void inPut(int& m, int& y) {
	printf("Nhap thang: "); scanf_s("%d", &m);
	printf("Nhap nam: "); scanf_s("%d", &y);
}

int checkLeapYear(int y) {
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) return 1;
	else return 0;
}

void checkMonthAndYear(int m, int y) {
	switch (m)
	{
	case 1: printf("Thang nay co 31 ngay! "); break;
	case 3: printf("Thang nay co 31 ngay! "); break;
	case 5: printf("Thang nay co 31 ngay! "); break;
	case 7: printf("Thang nay co 31 ngay! "); break;
	case 8: printf("Thang nay co 31 ngay! "); break;
	case 10: printf("Thang nay co 31 ngay! "); break;
	case 12: printf("Thang nay co 31 ngay! "); break;
	case 4: printf("Thang nay co 30 ngay! "); break;
	case 6: printf("Thang nay co 30 ngay! "); break;
	case 9: printf("Thang nay co 30 ngay! "); break;
	case 11: printf("Thang nay co 30 ngay! "); break;
	case 2:
		if (checkLeapYear(y) == 1) printf("Thang nay co 29 ngay");
		else
			if (checkLeapYear(y) == 0) printf("Thang nay co 28 ngay");
		break;
	}
}

void main(){
	int m, y;
	inPut(m, y);
	checkMonthAndYear(m, y);
}