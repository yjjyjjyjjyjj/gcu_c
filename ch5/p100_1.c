#include <stdio.h>

int main(){
    int x,y,z,sum,avg;

    printf("정수를 입력하시오. ");
    scanf("%d", &x);

    printf("정수를 입력하시오. ");
    scanf("%d", &y);

    printf("정수를 입력하시오. ");
    scanf("%d", &z);

    sum = x+y+z;
    avg = sum/3;

    printf("수의 합계는 %d입니다.\n", sum);
    printf("평균값은 %d입니다.\n", avg);

    return 0;
}