#include <stdio.h>

int factorial(int); // 함수 선언문

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d! = %d", n, factorial(n));
}

int factorial(int num) // 함수 정의문
{
    if (num <= 1) // 재귀함수 탈출조건
        return 1;
    else
        return (num * factorial(num - 1));
}