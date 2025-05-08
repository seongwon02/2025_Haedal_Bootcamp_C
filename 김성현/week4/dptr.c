#include <stdio.h>

int main(void)
{
    double num = 3.14;
    double *ptr = &num;     // 변수 num의 주소를 가리키는 포인터 변수
    double **dptr = &ptr;   //  포인터 변수 ptr의 주소를 가리키는 이중 포인터 변수
    double *ptr2;

    printf("%p %p \n", ptr, *dptr);
    printf("%g %g \n", num, **dptr);


    ptr2 = &num;
    *ptr2 = 10.99;
    printf("%g %g \n", num, **dptr);
    return 0;
}