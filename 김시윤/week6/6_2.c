#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10000

int queue[MAX_SIZE];
int front = 0, rear = 0;

void push(int x) {
    queue[rear++] = x;
}
int pop() {
    if (front == rear) return -1;
    return queue[front++];
}
int size() {
    return rear - front;
}
int empty() {
    return (front == rear) ? 1 : 0;
}
int front1() {
    if (empty()) return -1;
    return queue[front];
}

int back1() {
    if (empty()) return -1;
    return queue[rear - 1];
}

int main() {
    int n;
    scanf("%d", &n);

    char a[10];

    for (int i = 0; i < n; i++) {
        scanf("%s", a);

        if (strcmp(a, "push") == 0) {
            int x;
            scanf("%d", &x);
            push(x);
        }
        else if (strcmp(a, "pop") == 0) {
            printf("%d\n", pop());
        }
        else if (strcmp(a, "size") == 0) {
            printf("%d\n", size());
        }
        else if (strcmp(a, "empty") == 0) {
            printf("%d\n", empty());
        }
        else if (strcmp(a, "front") == 0) {
            printf("%d\n", front1());
        }
        else if (strcmp(a, "back") == 0) {
            printf("%d\n", back1());
        }
    }
    return 0;
}