#include <stdio.h>
#define GAMES 3

int main(void){
    int scores[GAMES];
    int sum=0;
    int i;
    double average;

    for(i=0; i<GAMES; i++){
        printf("���� %d���� ������ ������? ", i+1);
        scanf("%d", &scores[i]);
    }

    for(i=0; i<GAMES; i++){
        sum += scores[i];
    }

    average = ((double)sum/3);
    printf("��� ������ %f�Դϴ�.\n", average);

    return 0;
}