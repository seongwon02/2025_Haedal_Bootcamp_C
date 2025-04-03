/*- row, col, num을 멤버로 하는 구조체를 정의한다.
- 최댓값을 가지는 위치와 값을 저장한 구조체를 반환하는 solution 함수를 생성한다.
- 위 함수의 매개변수로 2차원 배열을 선언하며 그 외의 매개변수를 선언하지 않는다.*/

#include <stdio.h>

typedef struct {
    int row;
    int col;
    int num;
} Max;

Max solution(int x[9][9]) {
    Max best = {0, 0, x[0][0]};
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (x[i][j] > best.num) {
                best.num = x[i][j];
                best.row = i;
                best.col = j;
            }
        }
    }

    return best;
}

int main() {
    int x[9][9];
    int i, j = 0;
    
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            scanf("%d", &x[i][j]);
        }
    }
    
    Max best2 = solution(x);

    printf("%d\n", best2.num);
    printf("%d %d", best2.row + 1, best2.col + 1);
    
    return 0;
}
