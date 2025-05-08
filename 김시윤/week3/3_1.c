#include <stdio.h>

int main(void) {
    int ary[9];
    for (int i = 0; i <= 8; i++) {
        scanf("%d", &ary[i]);
    }
    int a = ary[0];
    int b = 1;
    for (int i = 0; i < 9; i++) {
        if (ary[i] > a) {
            a = ary[i];
            b = i + 1;
        }
    }
    printf("%d\n%d", a, b);
    return 0;
    
}