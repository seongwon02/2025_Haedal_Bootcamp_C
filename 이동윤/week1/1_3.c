#include <stdio.h>

int main(void) {
    int y;

    
    scanf("%d", &y);

    
    if (y >= 1000 && y <= 3000) {
        printf("%d\n", y - 543); 
    } else {
        printf("입력 값이 범위를 벗어났습니다.\n");
    }

    return 0;
}