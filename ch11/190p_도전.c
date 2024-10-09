#include <stdio.h>

int main(void){
    int i=1;
    int dan;
    printf("구구단 입력: ");
    scanf("%d", &dan);

    while(i<=9){
        printf("%d*%d=%d\n",dan,i,dan*i);
        i++;
    }

    return 0;
}