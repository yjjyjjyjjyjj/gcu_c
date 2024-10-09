#include <stdio.h>

int main(void){
    int number, max_value=0;

    printf("양의 정수를 입력하시오.(종료는 -1)\n");

    scanf("%d", &number);
    while(number>0){
        if(number > max_value){
            max_value = number;
        }
        scanf("%d", &number);
    }
    printf("최댓값은 %d \n", max_value);
    return 0;
}