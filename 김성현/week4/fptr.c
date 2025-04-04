#include <stdio.h>

int WhoisFirst(int age1, int age2, int (*cmp)(int n1, int n2))
{
    return cmp(age1, age2);
}

int OlderFirst(int age1, int age2)
{
    if (age1 > age2)
        return age1;
    else if (age1 < age2)
        return age2;
    else
        return 0;
}

int YoungerFirst(int age1, int age2)
{
    if (age1 < age2)
        return age1;
    else if (age1 > age2)
        return age2;
    else
        return 0;
}

int main(void)
{
    int age1 = 20;
    int age2 = 30;
    int first;

    // 나이 많은 사람 출력
    printf("older first\n");
    first = WhoisFirst(age1, age2, OlderFirst);
    printf("age1: %d age2: %d, result: %d\n\n", age1, age2, first);

    // 나이가 적은 사람 출력
    printf("younger first\n");
    first = WhoisFirst(age1, age2, YoungerFirst);
    printf("age1: %d age2: %d, result: %d\n\n", age1, age2, first);

    return 0;
}