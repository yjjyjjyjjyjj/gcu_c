#include <stdio.h>

int main(void){
    //변수 선언
    int num, sum=0;

    //사용자로부터 정수 입력 받기
    printf("정수를 입력하세요.");
    scanf("%d", &num);

    //각 자리수의 합 계산
    while(num != 0){
        //num의 일의 자리수를 sum에 더하고,
        sum += num % 10;
        //num을 10으로 나누어 일의 자리수를 없애기
        num /= 10;
    }

    //결과 출력
    printf("각 자리수의 합은 %d입니다.\n", sum);
    return 0;
}