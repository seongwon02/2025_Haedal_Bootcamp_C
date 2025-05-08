#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info {
    int age;
    char name[101];
    int join_order;
};

int compare(const void* a, const void* b) {
    const struct info* p1 = (const struct info*)a;
    const struct info* p2 = (const struct info*)b;

    if ((*p1).age != (*p2).age) {
        return (*p1).age - (*p2).age;
    } else {
        return (*p1).join_order - (*p2).join_order;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    struct info* members = (struct info*)malloc(sizeof(struct info) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d %100s", &members[i].age, members[i].name);
        members[i].join_order = i;
    }

    qsort(members, n, sizeof(struct info), compare);

    for (int i = 0; i < n; i++) {
        printf("%d %s\n", members[i].age, members[i].name);
    }

    free(members);
    return 0;
}