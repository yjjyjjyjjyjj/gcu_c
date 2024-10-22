#include <stdio.h>

int main(void){
    char s[10], i;

    printf("���ڿ��� �Է��Ͻʽÿ�.");
    scanf("%s",s);

    i=0;
    while(s[i] != '\0'){
        i++;
    }

    printf("���ڿ��� ����: %d \n", i);
    return 0;
}