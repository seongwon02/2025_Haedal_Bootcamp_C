#include <stdio.h>
#include <string.h>

int main(){
    int i, a, b = 0;
    char str[1000];
    scanf("%d", &a);
    for(i = 0; i < a; i++){
        scanf("%s", str);
        b = strlen(str);
        printf("%c%c\n", str[0], str[b-1]);
    }
    return 0;
}