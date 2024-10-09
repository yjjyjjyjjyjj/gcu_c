#include <stdio.h>

int main(void){
    int remainder;
    int n;

    printf("정수를 입력하시오 : ");
    scanf("%d", &n);

    remainder = n%2;
    printf("2로 나누었을 때 나머지=%d \n", remainder);

    return 0;
}