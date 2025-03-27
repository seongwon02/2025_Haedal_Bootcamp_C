#include <stdio.h>
 
int F(int n) {
    if (n >= 2){
        return F(n - 1) + F(n - 2);
    }
    else if (n == 1){
        return 1;
    }
    else {
    return 0;
    }
}
 
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", F(n));
    return 0;
}