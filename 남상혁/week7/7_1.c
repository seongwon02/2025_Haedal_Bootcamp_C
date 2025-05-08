#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_LENGTH 100
#define FILENAME "todo_list.txt"

typedef struct {
    char task[MAX_LENGTH];
    int completed;
    char date[11];
} Task;

Task tasks[MAX_TASKS];
int task_count = 0;

void loadTasks() {
    FILE* file = fopen(FILENAME, "r");
    if (file == NULL) return;

    while (fscanf(file, "%d %10s %[^\n]", &tasks[task_count].completed, tasks[task_count].date, tasks[task_count].task) == 3) {
        task_count++;
    }
    fclose(file);
}

void saveTasks() {
    FILE* file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("파일 저장 오류!\n");
        return;
    }
    for (int i = 0; i < task_count; i++) {
        fprintf(file, "%d %s %s\n", tasks[i].completed, tasks[i].date, tasks[i].task);
    }
    fclose(file);
}

void addTask() {
    if (task_count >= MAX_TASKS) {
        printf("더 이상 할 일을 추가할 수 없습니다.\n");
        return;
    }
getchar();

    printf("새로운 할 일: ");
    fgets(tasks[task_count].task, MAX_LENGTH, stdin);
    tasks[task_count].task[strcspn(tasks[task_count].task, "\n")] = '\0';

    printf("완료 날짜 (YYYY-MM-DD): ");
    scanf("%10s", tasks[task_count].date);

    tasks[task_count].completed = 0;
    task_count++;

    printf("할 일이 추가되었습니다!\n");
}

void displayTasks() {
    if (task_count == 0) {
        printf("할 일이 없습니다!\n");
        return;
    }

    printf("\nTODO list:\n");
    for (int i = 0; i < task_count; i++) {
        printf("%d. [%s] %s (완료 기한: %s)\n",
            i + 1,
            tasks[i].completed ? "X" : " ",
            tasks[i].task,
            tasks[i].date);
    }
}

void deleteTask() {
    int num;
    displayTasks();
    if (task_count == 0) return;

    printf("삭제할 할 일 번호: ");
    scanf("%d", &num);

    if (num < 1 || num > task_count) {
        printf("잘못된 번호입니다.\n");
        return;
    }

    for (int i = num - 1; i < task_count - 1; i++) {
        tasks[i] = tasks[i + 1];
    }
    task_count--;
    printf("할 일이 삭제되었습니다!\n");
}

void completeTask() {
    int num;
    displayTasks();
    if (task_count == 0) return;

    printf("완료할 할 일 번호: ");
    scanf("%d", &num);

    if (num < 1 || num > task_count) {
        printf("잘못된 번호입니다.\n");
        return;
    }

    tasks[num - 1].completed = 1;
    printf("할 일이 완료되었습니다!\n");
}

int main() {
    int choice;
    loadTasks();

    while (1) {
        printf("\n===== TODO list =====\n");
        printf("1. 할 일 추가\n");
        printf("2. 할 일 삭제\n");
        printf("3. 목록 보기\n");
        printf("4. 완료 체크\n");
        printf("5. 종료\n");
        printf("선택 : ");
        scanf("%d", &choice);


        switch (choice) {
        case 1:
            addTask();
            break;
        case 2:
            deleteTask();
            break;
        case 3:
            displayTasks();
            break;
        case 4:
            completeTask();
            break;
        case 5:
            saveTasks();
            printf("프로그램을 종료합니다.\n");
            return 0;
        default:
            printf("잘못된 입력입니다.\n");
        }
    }
}