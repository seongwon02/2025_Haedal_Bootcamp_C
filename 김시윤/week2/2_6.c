#include <stdio.h>

int main() {
    int n,sum;
    int fir = 0;
    int sec = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum = fir + sec;
        fir = sec;
        sec = sum;
    }
    printf("%d",fir);
    return 0;
}