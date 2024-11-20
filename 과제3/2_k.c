#include <stdio.h>

void arayCopy(int *A, int *B, int size);

int main() {
    int A[] = { 10, 20, 30, 40, 50 };
    int B[5];
    int size = sizeof(A) / sizeof(A[0]);

    arayCopy(A, B, size);

    printf("복사된 배열 B: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}
void arayCopy(int *A, int *B,int size)
{
	int i;
	for (i = 0; i < size; i ++)
	{
		B[i] = A[i];
	}
}