/*
3. 문자열 안에 포함된 특정한 문자의 개수를 세는 함수 int Str_Chr(char *s, int c)를 작성하고 테스트 하라. 

s는 문자열이고, c는 개수를 셀 문자이다. 

예):문자열을 입력하시오: I am a boy.

    개수를 셀 문자를 입력하세요.: a

    a의 개수는 2 입니다.
*/

#include <stdio.h>

int Str_Chr(char *s, int c);

int main(void){
    char str[1000];
    printf("문자열을 입력하시오: ");
    gets(str);

    int c;
    printf("개수를 셀 문자를 입력하세요: ");
    scanf("%c", &c);

    int result = Str_Chr(str, c);

    printf("%c의 개수는 %d입니다.\n", c, result);

    return 0;
}

int Str_Chr(char *s, int c){
    int count = 0;

    for(int i=0; *(s+i) != '\0'; i++){
        if((int)*(s+i) == c){
            count++;
        }
    }

    return count;
}