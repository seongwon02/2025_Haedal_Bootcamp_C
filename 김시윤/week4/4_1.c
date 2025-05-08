#include <stdio.h>

#define SIZE 9


typedef struct {
    int row;
    int col;
    int num;
} Res;


Res solution(int arr[SIZE][SIZE]) {
    Res a = { 0, 0, arr[0][0] };

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (arr[i][j] > a.num) {
                a.num = arr[i][j];
                a.row = i;
                a.col = j;
            }
        }
    }

    return a;
}

int main() {
    int arr[SIZE][SIZE];

    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

   
    Res b = solution(arr);

    printf("%d\n", b.num);
    printf("%d %d\n", b.row + 1, b.col + 1);

    return 0;
}