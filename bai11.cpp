#include <stdio.h>

void inPut(char &a) {
	printf("Nhap ki tu can chuyen: "); scanf_s("%c", &a);
}

void outPut(char result) {
	printf("Ki tu sau khi chuyen doi: %c", result);
}

int changeLowcaseToUpcase(char n) {
	return n + 32; 
}

int changeUpcaseToLowcase(char n) {
	return n - 32;
}

int main() {
	char n;
	inPut(n);
	char result;
	if (n <= 65) result = changeLowcaseToUpcase(n);
	else result = changeUpcaseToLowcase(n);
	outPut(result);
}
/*
-	Khi ta nhập A theo bảng mã ASCII có số là 65
-	Do đó điều kiện đúng dẫn đến sẽ thực hiện changeLowcaseToUpcase
-	Kí tự A sẽ chuyển thành kí tự a bằng cách cộng thêm 32 
-	Còn không sẽ trừ đi 32.
*/