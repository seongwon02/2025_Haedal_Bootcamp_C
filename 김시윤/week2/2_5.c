#include <stdio.h>

int main() {
    int x, n,a,b;
    int sum;
    int sum1 = 0;
    scanf("%d %d", &x, &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &a, &b);
        sum = a * b;
        sum1 += sum;
    }
        if (x == sum1) {
            printf("Yes");
        }
        else printf("No");
    

    return 0;
}