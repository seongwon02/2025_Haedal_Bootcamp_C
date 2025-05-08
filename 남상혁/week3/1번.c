#include <stdio.h>

int main(){
    int x[9];
    int a, b, i = 0;
    for (i = 0; i < 9; i++){
        scanf("%d", &x[i]);
        if (x[i] > a){
            a = x[i];
            b = 1;
        }
    }
    printf("%d\n%d", a, b + 1);
}