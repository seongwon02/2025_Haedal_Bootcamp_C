#include <stdio.h>

int main(){
    int a, b = 0;
    int c, d, e, f, g = 0;
    scanf("%d %d", &a, &b);
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g = a % b;
    printf("%d\n%d\n%d\n%d\n%d\n", c, d, e, f, g);
    return 0;
}