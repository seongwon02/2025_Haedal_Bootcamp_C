#include <stdio.h>

int main(){
    int N = 0;
    int i = 0;
    int j = 0;
    scanf("%d", &N);
    N += 1;
    for(i = 1; i <= N-1; i++){
        for (j = 1; j <= N-i; j++){
            printf(" ");
        }
        for (j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}