#include <stdio.h>

int main(void){
    int i =0;
    int limit;
    printf("수를 입력하시오. ");
    scanf("%d", &limit);

    while(i<=limit){
        printf("%d ",i);
        i++;
    }
    
    printf("\n");
    return 0;
}