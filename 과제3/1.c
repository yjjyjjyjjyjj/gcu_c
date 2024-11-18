/*
1. 2개의 정수의 합과 차를 동시에 반환하는 함수를 작성하고 테스트하라. 포인터 매개변수를 사용한다.
함수의 원형은 다음과 같다.
*/

#include<stdio.h>

void getSumDiff(int x, int y, int *p_sum, int *p_diff);

int main(void){
    int x; 
    int y;
    int sum=0;
    int diff=0;
    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d",&x, &y);

    getSumDiff(x,y, &sum, &diff);

    return 0;
}

void getSumDiff(int x, int y, int *p_sum, int *p_diff){
    *p_sum = x+y;
    *p_diff = x-y;

    printf("합 : %d, 차: %d\n",*p_sum, *p_diff);
}