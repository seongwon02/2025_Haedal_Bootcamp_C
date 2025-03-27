#include <stdio.h>

int main(void)
{
    int X, N;
    scanf("%d", &X);
    scanf("%d", &N);

    int sum = 0;
    int price, quantity;
    for (int i = 0; i < N; i++)
    {
        scanf("%d%d", &price, &quantity);
        sum += price * quantity;
    }
    if (sum == X)
        printf("Yes");
    else
        printf("No");

    return 0;
}