#include <stdio.h>
#include <math.h>

int H(int a , int b , int c){
    if (c == 0){
        printf("%d %d\n", a, b);
    }
    else{
        H(a, 6 - a - b, c - 1);
        printf("%d %d\n", a, b);
        H(6 - a - b, b, c - 1);
    }
}

int main(){
    int N = 0;
    int K = 0;
    scanf("%d", &N);
    K = pow(2, N) - 1;
    printf("%d\n", K);
    H(1, 3, N);
    }