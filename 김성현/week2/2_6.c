#include <stdio.h>

int main(void)
{
    int a = 0; int b = 1; int c; int n;
    scanf("%d", &n);

 
    for (int i = 1; i <= n; i++)
    {
        switch(i % 3)
        {
            case 1 :
                c = a + b;
                break;
            case 2 :
                a = b + c;
                break;
            case 0 :
                b = c + a;
                break;
        }
    }

    switch(n % 3)
    {
        case 0 :
            printf("%d", a);
            break;
        case 1 :
            printf("%d", b);
            break;
        case 2 :
            printf("%d", c);
            break;
    }
        
    
    return 0;
}