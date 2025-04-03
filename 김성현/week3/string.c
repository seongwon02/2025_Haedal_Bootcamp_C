//문자열 처리 함수 사용 코드
#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char str1[MAX] = "Hello";
    char str2[MAX];

    strcpy(str2, str1); //str1을 str에 복사
    printf("%s\n", str2);
    if (strcmp(str1, str2) == 0)
        printf("두 문자열은 같은 문자열\n");
    printf("str2의 크기 : %d", strlen(str2));
}