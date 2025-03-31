#include <stdio.h>
#include <math.h>

int hanoi(int n, int start, int end);
int count = 0;

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%.0f\n", pow(2, n) - 1);
    hanoi(n, 1, 3);

    
    return 0;
}

int hanoi(int n, int start, int end)
{
    int mid = 6 - start - end;
    
    if (n == 1)
    {
        printf("%d %d\n",start, end); count++;
        return 1;
    }
    else
    {
        hanoi(n - 1, start, mid);
        printf("%d %d\n", start, end); count++;
        hanoi(n - 1, mid, end);
        return count;
    }
}