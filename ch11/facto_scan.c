#include <stdio.h>

int main(void){
    int i=1;
    int factorial;
    printf("수를 입력하시오. ");
    scanf("%d",&factorial);

    int result=1;

    while(i<=factorial){
        result *= i;
        i++;
    }

    printf("팩토리얼 결과 : %d", result);
    return 0;
}