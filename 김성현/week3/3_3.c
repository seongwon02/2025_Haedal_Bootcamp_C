#include <stdio.h>

int main(void)
{
    char arr[6];

    scanf("%c%c%c %c%c%c", arr, arr + 1, arr + 2, arr + 3, arr + 4, arr + 5);

    int num1 = 100 * ( arr[2] - 48) + 10 * ( arr[1] - 48) + ( arr[0] - 48);
    int num2 = 100 * ( arr[5] - 48) + 10 * ( arr[4] - 48) + ( arr[3] - 48);

    printf("%d", num1 > num2 ? num1 : num2);
    
    return 0;
}