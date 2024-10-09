#include <stdio.h>
#define SUM 7

int main(void){
    int diceA, diceB;

    printf("합이 %d이 되는 경우의 수를 찾아봅니다. \n", SUM);
    printf("-----------------------\n");
    printf("주사위A         주사위B\n");
    printf("-----------------------\n");
    for(diceA=1; diceA<=6; diceA++){
        for(diceB=1; diceB<=6; diceB++){
            if(diceA+diceB == SUM){
                printf("%d               %d \n",diceA, diceB);
            }
        }
    }
    return 0;
}