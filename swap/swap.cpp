#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int swap(int* , int* );
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("swap : %d %d ", a, b);
	return 0;
}
int swap(int*a, int*b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	return 0;
}