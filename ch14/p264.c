#include <stdio.h>

int main(void){
    char s[10], i;

    printf("문자열을 입력하십시오.");
    scanf("%s",s);

    i=0;
    while(s[i] != '\0'){
        i++;
    }

    printf("문자열의 길이: %d \n", i);
    return 0;
}