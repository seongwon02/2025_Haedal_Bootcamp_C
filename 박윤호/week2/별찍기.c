#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1; a >= i; i++){
        for(int j = 0; j < a-i; j++){
            printf(" ");
        }
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }

}