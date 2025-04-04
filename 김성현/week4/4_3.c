#include <stdio.h>

typedef struct {
    int weight, height, rank;
} Person;

int main(void)
{
    Person arr[50];
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &arr[i].weight, &arr[i].height);
        arr[i].rank = 1;
    }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (arr[i].weight < arr[j].weight && arr[i].height < arr[j].height)
                arr[i].rank++;

    for (int i = 0; i < N; i++)
        printf("%d ", arr[i].rank);


    return 0;
}