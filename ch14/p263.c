#include <stdio.h>

int main(void){
    char question[]="IS Seoul the capital city of Korea?(y or n)";
    char answer[100];

    printf("%s", question);
    scanf("%s", answer);

    if(answer[0] == 'y'){
        printf("�¾ҽ��ϴ�.\n");
    }else{
        printf("Ʋ�Ƚ��ϴ�.\n");
    }

    return 0;
}