#include <stdio.h>

int main()
{
    int sum1 = 0;
    for (int i = 1; i <= 10; i++)
        sum1 += i;

    // while 사용

    int sum2 = 0;
    int i = 1;
    while (i <= 10)
    {
        sum2 += i;
        i++;
    }

    printf("%d %d", sum1, sum2);

    return 0;
}