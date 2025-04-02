#include <stdio.h>

int main()
{
    int arr[3] = {11, 22, 33};

    for (int i = 0; i < 3; i++)
        printf("%d index : %d\n", i, *(arr + i));
}

	// ary는 정수를 담은 배열이므로 i만큼 증가시키는 연산을 할 때 실제로는 4*i만큼 증가
	// 정수형은 4바이트 크기로 저장되기 때문!