#include <stdio.h>
#include <string.h>

#define MAX 100000
#define NAME 101

typedef struct {
    int age;
    char name[NAME];
    int idx;
} Member;

Member member[MAX];

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %s", &member[i].age, member[i].name);
        member[i].idx = i;
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (member[j].age > member[j + 1].age ||
                (member[j].age == member[j + 1].age && member[j].idx > member[j + 1].idx)) {
                Member temp = member[j];
                member[j] = member[j + 1];
                member[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d %s\n", member[i].age, member[i].name);
    }

    return 0;
}