#include <stdio.h>

void inPut(int& n) {
	printf("Nhap so can doc: ");
	scanf_s("%d", &n);
}

void readNumber(int n) {
	switch (n)
	{
	case 0: printf("Khong");
		break;
	case 1: printf("Mot");
		break;
	case 2: printf("Hai");
		break;
	case 3: printf("Ba");
		break;
	case 4: printf("Bon");
		break;
	case 5: printf("Nam");
		break;
	case 6: printf("Sau");
		break;
	case 7: printf("Bay");
		break;
	case 8: printf("Tam");
		break;
	case 9: printf("Chin");
		break;

	default: printf("Khong doc duoc");
		break;
	}
}

int main() {
	int n;
	inPut(n);
	readNumber(n);
}
