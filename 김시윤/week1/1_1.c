#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	
	if (1 <= a && b <= 10000) {
		int sum = a + b;
		int sub = a - b;
		int mul = a * b;
		int div = a / b;
		int res = a % b;
		printf("%d\n", sum);
		printf("%d\n", sub);
		printf("%d\n", mul);
		printf("%d\n", div);
		printf("%d\n", res);
	}
	return 0;
}