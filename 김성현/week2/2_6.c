#include <stdio.h>

int main(void)
{
    int a = 0; int b = 1; int c; int n;
    scanf("%d", &n);

    if (n == 0)
        puts("0");
    else if (n == 1)
        puts("1");
    else
    {
        for (int i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d", c);
    }
        
    
    return 0;
}