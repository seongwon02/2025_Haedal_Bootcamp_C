#include <stdio.h>
 
int main(){
    int N, M, i, j, k, l, s;
    scanf("%d %d", &N, &M);
 
    int A[N][M];
    int B[N][M];
 
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            scanf("%d", &A[i][j]);
        }
    }
 
    for(k=0; k<N; k++){
        for(l=0; l<M; l++){
            scanf("%d", &B[k][l]);
        }
    }
 
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            s = A[i][j] + B[i][j];
            printf("%d ", s);
        }
        printf("\n");
    }
    return 0;
}