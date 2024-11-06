#include <stdio.h>

void getValues(int  *a, int *b){
    int value1, value2;
    printf("첫 번째 값을 입력하시오. : ");
    scanf("%d", &value1);
    printf("두 번째 값을 입력하시오. : ");
    scanf("%d", &value2);
    *a = value1;
    *b = value2;
}

int main(void){
    int x, y;

    getValues(&x, &y);

    printf("x = %d, y = %d\n",x,y);
    return 0;
}