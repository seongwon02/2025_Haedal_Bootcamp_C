#include <stdio.h>
#include <string.h>

int main(){
    char a[5], b[5];
    char c;

    scanf("%s", a);
    scanf("%s", b);

    c = a[0];
    a[0] = a[2];
    a[2] = c;

    c = b[0];
    b[0] = b[2];
    b[2] = c;

    if (strcmp(a, b) > 0){
        printf("%s", a);
    }
    else{
        printf("%s", b);
    }
    return 0;
}