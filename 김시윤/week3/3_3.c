#include <stdio.h>


int re(int n) {
    int a = 0;
    while (n > 0) {
        a = a * 10 + n % 10;
        n /= 10;
    }
    return a;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int rA = re(A);
    int rB = re(B);

    if (rA > rB)
        printf("%d\n", rA);
    else
        printf("%d\n", rB);

    return 0;
}