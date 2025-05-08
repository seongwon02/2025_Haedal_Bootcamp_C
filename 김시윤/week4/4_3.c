#include <stdio.h>

#define MAX 50

int main() {
    int n;
    int w[MAX], h[MAX];
    int rank[MAX];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &w[i], &h[i]);
        rank[i] = 1; 
    }
    for (int i= 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;

         
            if (w[j] > w[i] && h[j] > h[i]) {
                rank[i]++;
            }
        }
    }
    
    for (int i = 0; i <n; i++) {
        printf("%d ", rank[i]);
    }
    return 0;
}
