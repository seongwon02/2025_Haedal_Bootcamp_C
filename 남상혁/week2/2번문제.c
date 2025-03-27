#include <stdio.h>

int main(){
    int H = 0;
    int M = 0;
    scanf("%d %d", &H, &M);
    if(M < 45){
        if(H == 0){
            H = 23;
            M = M + 15;}
            else{
                H -= 1;
                M += 15;
            }
        }
        else{
            M -= 45;
        }
    printf("%d %d", H, M);
    return 0;
}