#include <stdio.h>

int main(void) {
    int T;
    char s[1001];
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%s", &s);
        int b = strlen(s);
        printf("%c%c\n", s[0], s[b - 1]);
    }

    return 0;
}