/*
2. 정수 배열 A[]를 다른 정수 배열 B[]에 복사하는 함수를 작성하고 테스트하라.

[Hint] 배열의 복사 함수의 구조는 다음과 같다.
*/
#include <stdio.h>

void Array_Copy(int *A, int *B, int size){
    for(int i=0; i<size; i++){
        *(B+i) = *(A+i);
    }
}

int main(void){
    int a[] = {1,2,3,4,5};
    int b[] = {};

    Array_Copy(a, b, 5);

    for(int i=0; i<5; i++){
        printf("%d ",*(b+i));
    }

    return 0;
}