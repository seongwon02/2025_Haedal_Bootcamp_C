#include <stdio.h>

int main()
{
    int sum = 0;
    int arr[] = {5, 11, 30, 124, 54};

    for (int i = 0; i < 5; i++)
        sum += arr[i];

    printf("%d", sum);
}