#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[10][1000];
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
        scanf("%s", arr[i]);
    
    for (int i = 0; i < T; i++)
        printf("%c%c\n", arr[i][0], arr[i][strlen(arr[i]) - 1]);

    return 0;
}