#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);


    int answer1 = a * (b % 10);
    printf("%d\n", answer1);

    int answer2 = a * ((b % 100) / 10);
    printf("%d\n", answer2);

    int answer3 = a * (b / 100);
    printf("%d\n", answer3);

    printf("%d\n", a * b);


    return 0;
}