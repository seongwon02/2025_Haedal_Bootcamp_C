#include <stdio.h>

int main() {
    int N, a, i, j, k = 0;
    int x[100] = {0}, y[100] = {0};


    scanf("%d", &N);
    
    for (i = 0; i < N; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    
    for (j = 0; j < N; j++) {
        a = 1;
        for (int k = 0; k < N; k++) {
            if (x[j] < x[k] && y[j] < y[k]) {
                a++;
            }
        }
        printf("%d ", a);
    }
    return 0;
}