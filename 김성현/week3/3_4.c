#include <stdio.h>
#include <string.h>

int main(void)
{
    int T, length;
    int R[1000];
    char S[1000][21];
    scanf("%d", &T);
    getchar();

    for (int i = 0; i < T; i++)
        scanf("%d %s", &R[i], S[i]);

    for (int i = 0; i < T; i++)
    {
        length = strlen(S[i]);
        
        for (int j = 0; j < length; j++)
            for (int k = 0; k < R[i]; k++)
                printf("%c", S[i][j]);

        printf("\n");
    }
    
    return 0;
}