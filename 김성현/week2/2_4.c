#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        for (int j = N + 1 - i; j > 1; j--)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}