#include <stdio.h>

int main(void){
    int number;
    int sum=0;

    number = 1;
    while(number <= 100){
        if(number%3==0 && number%5==0){
            sum+=number;
        }
        number++;
    }
    printf("1부터 100 사이의 수 중, 3의 배수이면서 5의 배수인 수의 합은 %d입니다.\n",sum);
    return 0;
}