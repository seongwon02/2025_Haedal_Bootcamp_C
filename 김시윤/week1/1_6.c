#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int one = b % 10;
    int ten = (b/ 10)%10;
    int hun = (b/ 100)%100;
    printf("%d\n", a * one);
    printf("%d\n", a * ten);
    printf("%d\n", a * hun);
    printf("%d", a * b);
    return 0;
}