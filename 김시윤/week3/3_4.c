#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int R;
        char S[21]; 
        scanf("%d %s", &R, S);

        for (int i = 0; i < strlen(S); i++) {
            for (int j = 0; j < R; j++) {
                printf("%c", S[i]);
            }
        }
        printf("\n");
    }

    return 0;
}