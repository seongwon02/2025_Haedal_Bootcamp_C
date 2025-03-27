#include <stdio.h>

int main(){
    int X = 0;
    int N = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int i = 0;

    scanf("%d", &X);
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d %d", &a, &b);
        c = a * b;
        d += c;
    }

    if(X == d){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
    }