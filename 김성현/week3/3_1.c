#include <stdio.h>

int main(void)
{
    int num[9];

    for (int i = 0; i < 9; i++)
        scanf("%d", num + i);

    int max = num[0];
    int index = 1;

    for (int i = 0; i < 9; i++)
        if (num[i] > max)
        {
            max = num[i];
            index = i + 1;
        }

    printf("%d\n%d\n", max, index);

    return 0;
}