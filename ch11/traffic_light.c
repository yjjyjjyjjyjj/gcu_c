#include <stdio.h>

int main(void){
    char color;

    do{
        printf("신호등 색상을 입력하세요(r,y,g): ");
        scanf(" %c", &color);
    }while(color!='r' && color!='y' && color!='g');

    switch(color){
        case 'r':
            printf("정지! \n");
            break;
        case 'y':
            printf("조심! \n");
            break;
        case 'b':
            printf("진행! \n");
            break;
    }

    return 0;
}