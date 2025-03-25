#include <stdio.h>

int main(){
    int a, b = 0;
    int d, e, f, g = 0;
    scanf("%d %d", &a, &b);
    d = a * (b%10);
    e = a * ((b%100)/10);
    f = a * (b/100);
    g = a * b;
    printf("%d\n%d\n%d\n%d\n", d, e, f, g);
    return 0;
}