#include <stdio.h>
int main(void){
    char c;
    do{
        printf("문자열을 입력하시오(q면 종료) ");
        scanf(" %c", &c);
        if(c != 'q'){
        printf("%c\n",c);
        }
    }while(c != 'q');

    printf("종료!\n");
    
    return 0;
}