#include <stdio.h>

int a = 0; // 전역변수
void func()
{
    static int num1 = 0; // 지역변수에 쓰인 static 변수
    int num2 = 0; // 지역변수
    num1++; num2++; a++;
    printf("static : %d, local : %d\n", num1, num2);
}

int main(void)
{
    for (int i = 0; i < 3; i++) // i는 반복문 밖에서 유효하지 않다.
        func();
    printf("%d", a);
}