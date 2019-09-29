#include <stdio.h> 

void inPut(int& h, int& m, int& s) {
	printf("Give me hours: "); scanf_s("%d", &h);
	printf("Give me minutes: "); scanf_s("%d", &m);
	printf("Give me seconds: "); scanf_s("%d", &s);
}

void outPut(int h, int m, int s, int result1, int result2, int result3) {
	printf("%d hours %d minutes %d seconds = %d hours \n", h, m , s, result1);
	printf("%d hours %d minutes %d seconds = %d minutes \n", h, m, s, result2);
	printf("%d hours %d minutes %d seconds = %d seconds \n", h, m, s, result3);
}

int changeAnythingToSeconds(int h, int m, int s) {
	return (h * 3600) + (m * 60 )+ s;
}

int changeHoursToSeconds(int h, int m, int s) {
	return (changeAnythingToSeconds(h, m, s) / 3600); 
}

int changeMinutesToSeconds(int h, int m, int s) {
	return (changeAnythingToSeconds(h, m, s) / 60);
}

int main() {
	int h, m, s;
	inPut(h, m, s);
	int result1 = changeHoursToSeconds(h, m, s);
	int result2 = changeMinutesToSeconds(h, m, s);
	int result3 = changeAnythingToSeconds(h, m, s);
	outPut(h, m, s, result1, result2,result3);
}