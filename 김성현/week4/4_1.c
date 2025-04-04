#include <stdio.h>

typedef struct {
    int row, col, num;
} Metrix;

Metrix solution(int (*arr)[9]);

int main(void)
{
    int arrinput[9][9];
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            scanf("%d", &arrinput[i][j]);

    Metrix result = solution(arrinput);
    printf("%d\n%d %d", result.num, result.row, result.col);

    return 0;
}

Metrix solution(int (*arr)[9])
{
    Metrix sol = {0, 0, -1};
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            if (arr[i][j] > sol.num)
            {
                sol.row = i + 1;
                sol.col = j + 1;
                sol.num = arr[i][j];
            }
    
    return sol;
}