#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define MAX 45

int main(void){
    int i, j, temp;
    int numbers[MAX+1] = {0};   //각 숫자의 사용 여부를 나타내는 배열
    srand((unsigned)time(NULL));

    for(i=0; i<6; i++){
        do{
            temp = 1+(rand()%MAX);
        }while(numbers[temp] == 1);
        numbers[temp] = 1;  //해당 숫자를 선택됨으로 표시
        printf("%d ",temp);
    }
    printf("\n");
    return 0;
}