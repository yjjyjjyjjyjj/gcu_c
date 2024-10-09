#include <stdio.h>
#define GAMES 3

int main(void){
    int scores[GAMES];
    int sum=0;
    int i;
    double average;

    for(i=0; i<GAMES; i++){
        printf("게임 %d에서 선수의 득점은? ", i+1);
        scanf("%d", &scores[i]);
    }

    for(i=0; i<GAMES; i++){
        sum += scores[i];
    }

    average = ((double)sum/3);
    printf("평균 득점은 %f입니다.\n", average);

    return 0;
}