#include <stdio.h>

int main(void){
    int s_num, e_num;
    int sum=0;

    printf("시작 숫자를 입력하시오. ");
    scanf("%d", &s_num);

    printf("끝 숫자를 입력하시오. ");
    scanf("%d", &e_num);

    while(s_num<=e_num){
        sum=sum+s_num;
        s_num++;
    }

    printf("두 수 사이의 합 : %d \n",sum);
    return 0;
}