#include <stdio.h>

#define SIZE 11

int main(void){
    int freq[SIZE] = {0};
    int i, candidate;

    while(1){
        printf("몇 번 연예인을 선택하시겠습니까? (종료 -1): ");
        scanf("%d", &candidate);
        if(candidate < 0) break;
        freq[candidate]++;
    }

    printf("값 득표결과\n");

    printf("요소        값      히스토그램  \n");
    for(i=1;i<SIZE;i++){
        printf("%3d     %3d     ", i, freq[i]);
        for(int j=1; j<=freq[i]; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}