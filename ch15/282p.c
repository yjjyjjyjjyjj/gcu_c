//두 수 중에서 큰 수를 찾는 함수 예제
#include <stdio.h>
int get_larger(int x, int y);

int main(void){
    int a, b;

    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &a, &b);
    printf("두 수 중에서 큰 수는 %d 입니다.\n", get_larger(a,b));

    return 0;
}

int get_larger(int x, int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}