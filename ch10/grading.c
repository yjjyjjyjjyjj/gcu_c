#include <stdio.h>

int main(void){
    char grade;

    printf("학점을 입력하시오: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
        case 'C':
            printf("Good\n");
            break;
        case 'D':
            printf("Poor\n");
            break;
        case 'F':
            printf("fail\n");
            break;
        default:
            printf("잘못된 입력입니다.\n");
            break;
    }

    return 0;
}